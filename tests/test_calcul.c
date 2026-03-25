#include "../calcul.h"
#include <stdio.h>

int main(void) {
  /* On teste si 2 + 2 font bien 4 */
  if (add(2, 2) != 4) {
    printf("ERREUR : Le test a echoue !\n");
    return 1;
  }

  printf("SUCCES : Le test est valide !\n");
  return 0;
}
