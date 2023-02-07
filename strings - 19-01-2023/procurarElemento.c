#include<stdio.h>

int main(){

  int D[3][3], n, count = 0;

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("Digite o elemento da linha %d e da coluna %d: ",i+1, j+1);
      scanf("%d",&D[i][j]);
    }
  }

  printf("Digite um numero que deseja procurar na matriz: ");
  scanf("%d",&n);

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if(D[i][j] == n){
        count++;
      }
    }
  }

  if(count > 0)
    printf("Numero %d encontrado %d vezes!\n", n, count);
  else
    printf("Numero nao encontrado na matriz!\n");

  return 0;
}