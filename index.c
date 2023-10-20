#include <stdio.h>

/* copy input to output; 2nd version */
main()
{
  int c;
  int condition;

  c = getchar();
  while (condition = getchar() != EOF) {
    printf("condition %d\n", condition);
    putchar(c);
  }
}