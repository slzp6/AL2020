/* code: q9-3.c   (v1.20.00) */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROW  256
#define COL  256
#define FILTER_SIZE 3

struct pgm {
  int row;
  int col;
  int max;
  float pixel[ROW][COL];
};
typedef struct pgm PGM_TYPE;


/* ------------------------------------------- */
void pgm_read (PGM_TYPE * image, char *filename) {
  FILE *infile;
  int i, j;
  char magic_number[32];

  if (NULL == (infile = fopen (filename, "r"))) {
    fprintf (stderr, "Can not open file [%s]", filename);
    exit (-1);
  }
  fscanf (infile, "%s", magic_number);
  fscanf (infile, "%d", &image->col);
  fscanf (infile, "%d", &image->row);
  fscanf (infile, "%d", &image->max);
  printf ("image:%s [%dx%d] (%d)\n",
	  magic_number, image->col, image->row, image->max);
  if (strcmp ("P2", magic_number)) {
    fprintf (stderr, "Not PGM(P2) file!");
    exit (-2);
  }
  for (i = 0; i < image->row; i++) {
    for (j = 0; j < image->col; j++) {
      fscanf (infile, "%f", &image->pixel[i][j]);
    }
  }
  fclose (infile);
}

/* ------------------------------------------- */
void pgm_write (PGM_TYPE * image, char *filename) {
  FILE *outfile;
  int i, j;

  if (NULL == (outfile = fopen (filename, "w"))) {
    fprintf (stderr, "Can not open file [%s]", filename);
    exit (-1);
  }
  fprintf (outfile, "%s\n", "P2");
  fprintf (outfile, "%d ", image->col);
  fprintf (outfile, "%d \n", image->row);
  fprintf (outfile, "%d \n", image->max);

  for (i = 0; i < image->row; i++) {
    for (j = 0; j < image->col; j++) {
      fprintf (outfile, "%2d ", (int) image->pixel[i][j]);
    }
    fprintf (outfile, "\n");
  }
  fclose (outfile);
}

/* ------------------------------------------- */
void convolution (PGM_TYPE * image_input, PGM_TYPE * image_output) {
  int i, j, k, l, px, py, sum;
  float dsum;

  float filter[FILTER_SIZE][FILTER_SIZE] = {
    {0.0, -1.0, -2.0},
    {1.0, 0.0, -1.0},
    {2.0, 1.0, 0.0}
  };

  image_output->row = image_input->row;
  image_output->col = image_input->col;
  image_output->max = image_input->max;
  px = (FILTER_SIZE - 1) / 2;
  py = (FILTER_SIZE - 1) / 2;
  dsum = 0;
  for (i = 0 + px; i < image_input->row - px; i++) {
    for (j = 0 + py; j < image_input->col - py; j++) {
      dsum = 0.0;
      for (k = 0; k < FILTER_SIZE; k++) {
	for (l = 0; l < FILTER_SIZE; l++) {
	  dsum += filter[k][l] * image_input->pixel[i - px + k][j - py + l];
	}
      }
      sum = (int) dsum;
      if (sum > image_input->max) {
	sum = image_input->max;
      }
      if (sum < 0) {
	sum = 0;
      }
      image_output->pixel[i][j] = sum;
    }
  }
}

/* ------------------------------------------- */
int main () {
  PGM_TYPE *pgm_input;
  PGM_TYPE *pgm_output;

  pgm_input = malloc (sizeof (PGM_TYPE));
  pgm_output = malloc (sizeof (PGM_TYPE));

  pgm_read (pgm_input, "sample.pgm");
  convolution (pgm_input, pgm_output);
  pgm_write (pgm_output, "q9-3-sobel-d.pgm");

  free (pgm_input);
  free (pgm_output);

  return 0;
}
