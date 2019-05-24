#include <stdio.h>
#include <string.h>
#define MAX_BUF 1024

int main () {

  char buf[MAX_BUF];
  int length;
  // other stuff

  do {
    fgets(buf, MAX_BUF, stdin);
    length = strlen(buf);

    for (int i = 0; i < length; i++) {

       if (buf[i] == 'E' || buf[i] == 'e')
         buf[i] = '3';

       if (buf[i] == 'I' || buf[i] == 'i')
         buf[i] = '1';

       if (buf[i] == 'O' || buf[i] == 'o')
         buf[i] = '0';

       if (buf[i] == 'S' || buf[i] == 's')
         buf[i] = '5';
    }

       printf("%s", buf);

        // read a line
        // calculate its length
        // modify the line by switching characters
        // print the modified line
  } while (length > 1);

}
