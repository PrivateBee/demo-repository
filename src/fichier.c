#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *tab = malloc(10 * sizeof(int));
  if (tab == NULL) {
    return 1;
  }

  tab[0] = 42;
  printf("tab=%d\n", tab[0]);

  free(tab);
  return 0;
}
