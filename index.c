#include <stdio.h>

/* copy input to output; 2nd version */
main()
{
  int c;

  c = getchar();
  while ((c = getchar()) != EOF)
    putchar(c);
}