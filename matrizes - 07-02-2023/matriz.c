#include<stdio.h>
#include<stdlib.h>

int main(){

  int l = 5, c = 4, *M, n = 4;

  // printf("Digite o numero de linhas e de colunas: ");
  // scanf("%d %d", &l, &c);

  M = (int*)malloc(l*c*sizeof(int)); // Aloca a matriz com l linhas e c colunas
  for (int i = 0; i < l; i++){
    for (int j = 0; j < c; j++){
      int k = i * n + j;
      M[k] = k + 1;
    }
  } 
  
  for (int i = 0; i < l; i++){
    for (int j = 0; j < c; j++){
      int k = i * n + j;
      printf("%d ", M[k]);
    }
    printf("\n");
  }

  free(M);
  return 0;
}