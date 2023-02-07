#include<stdio.h>
#include<stdlib.h>
#include<string.h>


// int inverte(int *V, int tam, int *ctPares){

// int *vetInvertido = (int*)malloc(tam * sizeof(int));
// int count = 0;

//   for(int i = 0; i < tam; i++){
//     vetInvertido[i] = V[tam-i-1];
//     if(V[i] % 2 == 0){
//       count++;
//   }
//   }

//   *ctPares = count;
//   return vetInvertido;

// }


// void main(){
//   int *p, ctPares, tam;
//   printf("Digite o tamanho do vetor: ");
//   scanf("%d", &tam);
//   int V[tam];

//   for(int i=0; i < tam; i++){
//     printf("Digite o %d.o elemento do vetor: ", i+1);
//     scanf("%d",&V[i]);
//   }
//   p = inverte(V, tam, &ctPares);
//   for(int i = 0; i < tam; i++){
//     printf("p[%d]: %d\n", i, p[i]);
//   }
//   printf("\nPares: %d",ctPares);
// }


#define MAX 100

char primeiraMaiuscula(char nome[]){
  int i = 0;
  nome[i] = nome[i] - 32;
  while(nome[i] != '\0'){
    if(nome[i] == ' '){
      i++;
      nome[i] = nome[i] - 32;
    }
    i++;
  }
}

int main(){

  char nome[MAX];
  printf("Digite o nome: ");
  scanf("%100[^\n]", &nome);
  primeiraMaiuscula(nome);
  printf("Nome pos funcao: %s",nome);
}