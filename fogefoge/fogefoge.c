#include <stdio.h>
#include <stdlib.h>

char** mapa;
int linhas;
int colunas;

int main() {
  

  FILE *f;
  f = fopen("mapa.txt", "r");
  if (f == 0) {
    printf("Erro na leitura do mapa\n");
    exit(1);
  }
  
  fscanf(f, "%d %d", &linhas, &colunas);
  printf("linhas %d colunas %d\n", linhas, colunas);
  
  mapa = malloc(sizeof(char*) * linhas);
  for(int i = 0; i < linhas; i++) {
	  mapa[i] = malloc(sizeof(char) * (colunas+1));
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
  for(int i = 0; i < linhas; i++){
	  free(mapa[i]);
  }
  free(mapa);
}