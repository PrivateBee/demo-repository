#include <stdlib.h>
#include <stdio.h>

int main(void) {
  int *tab = malloc(10 * sizeof(int));
  if (tab == NULL) {
    return 1;
  }




  
  tab[0] = 42;
  printf("%d\n", tab[0]);

  /* fuite mémoire à cause: on oublie aussi free(tab); */
  return 0;
}
