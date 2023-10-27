#include <stdio.h>

/* 
   Exercise 1-9: Remove extra blank characters.
   The program reads characters from the input and removes
   consecutive sequences of blank characters, reducing them to a single blank.

   Example:
   Input: "Hello   World"
   Output: "Hello World"
*/

main() {
  int c_input;
  int row_blanks_qt = 0;
  
  int i;
  for (i = 0; (c_input = getchar()) != EOF; i++) {
    if (c_input == ' ') row_blanks_qt ++;
    else row_blanks_qt = 0;

    if (row_blanks_qt <= 1) printf(
      "%c%c",
      i == 0 ? '\n' : '\0',
      c_input
    );
  }
  printf("\n");
}