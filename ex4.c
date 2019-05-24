/* Example: matrices represented by 2-dimensional arrays */

#include <stdio.h>

int main()
{
  int A[3][3];    // matrix A     
  int B[3][3];    // matrix B
  int C[3][3];    // matrix to store their sum

  // add your code below
  

  printf("Please enter 9 values for matrix A:\n");

  for (int i = 0; i < 3; i++) {
     for (int l = 0; l < 3; l++) {
        scanf("%d", &A[i][l]);
     }
  }

  printf("Please enter 9 values for matrix B:\n");

  for (int i = 0; i < 3; i++) {
     for (int l = 0; l < 3; l++) {
        scanf("%d", &B[i][l]);
     }
  }

  printf("C = B + A =\n");

  for (int i = 0; i < 3; i++) {
     for (int l = 0; l < 3; l++) {
        C[i][l] = A[i][l] + B[i][l];
        printf("%10d", C[i][l]);
     }
     printf("\n");
  }

}
