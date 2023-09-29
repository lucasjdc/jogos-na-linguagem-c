#include <stdio.h>
#include <stdlib.h>

int main() {
  char mapa[5][10+1];

  FILE *f;
  f = fopen("mapa.txt", "r");
  if (f == 0) {
    printf("Erro na leitura do mapa\n");
    exit(1);
  }

  // lendo o arquivo mapa.txt
  for (int i = 0; i < 5; i++) {
    fscanf(f, "%s", mapa[i]);
  }

  // imprimindo o mapa na tela
  for (int i = 0; i < 5; i++) {
    printf("%s\n", mapa[i]);
  }

  fclose(f);
}