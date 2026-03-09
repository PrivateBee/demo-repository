#include <stdlib.h>
#include <stdio.h>

int main(void) {
  int *tab = malloc(10 * sizeof(int));
  if (tab == NULL) {
    return 1;
  }


  printf(a);

  tab[0] = 42;
  printf("%d\n", tab[0]);

  /* fuite mémoire: on oublie free(tab); */
  return 0;
}