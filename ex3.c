/* Example: analysis of text */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000 /* The maximum number of characters in a line of input */

int main()
{
  char text[MAX], reversedText[MAX], c;
  int i;
  int counter = 0;
  int rCounter = 0;
  int length;
  int palindrome = 1;
  int j = 0;
  
  puts("Type some text (then ENTER):");
  
  /* Save typed characters in text[]: */
    
    fgets(text, MAX, stdin);
    length = (strlen(text));

  /* Reversing input string */
  for (int b = 0; b < length; b++) {
     reversedText[b] = text[length - (b + 2)];

  }
  printf("Your input in reverse is:\n");
  printf("%s\n", reversedText);

  /* Checking for palindrome */

  for (int i = 0; i < length - 1; i++) {
     if (isupper(reversedText[i]) > 0) {
       reversedText[i] = tolower(reversedText[i]);
     }

     if (isupper(text[i]) > 0) {
       text[i] = tolower(text[i]);
     }

     if (isalpha(reversedText[i]) > 0) {
       reversedText[rCounter] = reversedText[i];
       rCounter++;
     }

     if (isalpha(text[i]) > 0) {
       text[counter] = text[i];
       counter++;
     }
  }

  reversedText[rCounter] = '\0';
  text[counter] = '\0';

//  printf("%s\n", reversedText);
//  printf("%s\n", text);

  for (int i = 0; i < counter; i++) {
//     if (isalpha(reversedText[i]) > 0 && isalpha(text[i]) > 0) {
       if (reversedText[i] != text[i]) {
           palindrome = 0;
           break;
       }
  //   }
  }

  if (palindrome == 1) {
     printf("Found a palindrome!\n");
  }
}
