/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* xor.c (Chapter 20, page 515) */
/* Performs XOR encryption */

#include <ctype.h>
#include <stdio.h>

#define KEY '&'

int main(int argc, char *argv[])
{
  FILE *fpin, *fpout;
  int orig_char, new_char;

  fpin = fopen(argv[1], "rb");
  if(fpin == NULL) {
    fprintf(stderr, "input file open error\n");
    return 0;
  }
  fpout = fopen(argv[2], "wb");
  if(fpout == NULL) {
    fprintf(stderr, "output file open error\n");
    return 0;
  }

  while ((orig_char = fgetc(fpin)) != EOF) {
    new_char = orig_char ^ KEY;
    fputc(new_char, fpout);
  }

  return 0;
}
