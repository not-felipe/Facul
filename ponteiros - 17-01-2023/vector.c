#include<stdio.h>
#define MAX 8

void bubbleSort (int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {
        for (j = 0; j < n - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main(){
  int V[MAX], soma = 0;

  for(int i = 0; i < MAX; i++){
    printf("Digite o %d.o valor: ",i + 1);
    scanf("%d", &V[i]);
    soma = soma + V[i];
  }

  bubbleSort(V, MAX);
  printf("Menor elemento: %d\n", V[0]);
  printf("Maior elemento: %d\n", V[MAX-1]);
  float media = (float)soma/MAX;
  printf("Media dos elementos: %.1f", media);
}