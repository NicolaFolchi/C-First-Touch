/* Example: analysis of text */

#include <stdio.h>
#include <string.h>

#define MAX 1000 /* The maximum number of characters in a line of input */

int main()
{
  char text[MAX], reversedText[MAX], c;
  int length;
  int palindrome = 1;
  int lastValue;
  
  puts("Type some text (then ENTER):");
  
  /* Save typed characters in text[]: */
    
    fgets(text, MAX, stdin);
    length = (strlen(text) );

  /* Reversing input string */
  for (int b = 0; b < length; b++){
     reversedText[b] = text[length - (b + 2)];
//     lastValue = b;
  }
//  reversedText[length] = '\0';
//  text[length] = '\0';


  printf("Your input in reverse is:\n");
  printf("%s\n", reversedText);

  /* Checking for palindrome */
  for (int i = 0; i < length - 1; i++){
     if (reversedText[i] != text[i]){
       palindrome = 0;
       break;
     }
  }
  if (palindrome == 1){
     printf("Found a palindrome!\n");
  }
}
