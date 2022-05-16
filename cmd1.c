#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Number of arguments is incorrect\n");
    return 1;
  }

  int num1, num2;
  sscanf(argv[1], "%d", &num1);
  sscanf(argv[2], "%d", &num2);
  printf("Sum of num1 and num2 is %d\n", num1 + num2);
  return 0;
}

/*
Write a program which takes two integers as command line arguments. The program
should check if the number of arguments is OK.

The program should write out the sum of the two input values.
*/