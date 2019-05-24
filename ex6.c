/* Example: matrices represented by 2-dimensional arrays */

#include <stdio.h>
#include <string.h>

int main()
{
  int n;
  int sequence[1024];
  int length;

  printf("Please enter the starting number of the Collatz sequence:\n");
  scanf("%d", &n);
  sequence[0] = n;


  while (n > 1) {
     if ( n == 1)
        break;

     for (int i = 1; n != 1; i++) {
        if(n % 2 == 0) {
          n = n/2;
          sequence[i] = n;
        }
        else if (n % 2 > 0) {
           n = ((3*n) + 1);
           sequence[i] = n;
        }
     }

  }
//  length = strlen(sequence);
  for (int i = 0; i < 1023; i++) {
    printf("%d, ", sequence[i]);
    if (sequence[i] == 2){
      printf("%d\n", sequence[i+1]);
       break;
    }
  }
}
