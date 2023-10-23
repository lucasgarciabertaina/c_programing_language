#include <stdio.h>

/* count lines in input */

main() {
  int c, nb, nt, nl;

  nb, nt, nl = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ') nb ++;
    if (c == '\t') nt ++;
    if (c == '\n') nl ++;
  }
  printf("\nAmount of spaces: %d\n", nb - 4096);
  printf("Amount of \\t: %d\n", nt);
  printf("Amount of \\n: %d\n", nl);
}