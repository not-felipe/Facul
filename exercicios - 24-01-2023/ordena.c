#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000
/*

  Cria um vetor de 1000 elementos
  Preencher com numeros aleatorios
  Chamar a função pesquisa linear;

*/

void quickSort(int *V, int tam){
  
  if(tam > 1){
    int pivo = V[0]; // pivo
    int ini = 1; // aponta para o inicio do vetor
    int fim = tam - 1; // aponta para o fim do vetor
    do{
      while(ini < tam && V[ini] <= pivo) ini++;
      while(V[fim] > pivo) fim--;
      if(ini < fim){
        int temp = V[ini];
        V[ini] = V[fim];
        V[fim] = temp;
        ini++;
        fim--;
      }
    } while( ini <= fim);
  V[0] = V[fim];
  V[fim] = pivo;
  quickSort(V, fim);
  quickSort(&V[ini], tam - ini);
  }
  
}

void bubbleSortRec(int *V, int tam) {
  int aux, swap = 0;
  for (int i = 0; i < tam - 1; i++) {
    if (V[i] > V[i + 1]) {
      aux = V[i];
      V[i] = V[i + 1];
      V[i + 1] = aux;
      swap = 1;
    }
    if (swap != 0 && tam > 1)
      bubbleSortRec(V, tam - 1);
  }
}

void pesquisaLinear(int *V, int num) {
  int cont = 0;
  for (int i = 0; i < N; i++) {
    if (num == V[i]) {
      cont++;
    }
  }
  if (cont > 0) {
    printf("O numero %d foi encontrado %d vezes.", num, cont);
  } else {
    printf("O numero %d nao foi encontrado.", num);
  }
}
  
int buscaBinaria(int x, int n, int V[]){
  int e = -1, d = n;
  while(e < d - 1) {
    int m = (e + d)/2;
    if (V[m] < x) e = m;
    else d = m;
  }
  return d;
}

int main() {
  srand(time(NULL));
  int tam;
  int num, opc, opcOrdena;
  int *V;

  printf("Digite o tamanho do vetor: ");
  scanf("%d",&tam);

  V = malloc(sizeof(int) * tam);
  printf("\nVetor aleatorio nao ordenado: [ ");
  for (int i = 0; i < tam; i++) {
    V[i] = rand() % tam;
    printf("%d, ", V[i]);
  }
  printf("]\n");

  printf("Deseja ordenar o vetor de que forma?\n(1) BubbleSort\n(2) QuickSort\n");
  scanf("%d",&opcOrdena);

if(opcOrdena == 1) {
  clock_t t_1; 
  t_1 = clock();
  bubbleSortRec(V, tam);
  t_1 = clock() - t_1;
  printf("Vetor Ordenado BubbleSort: [ ");
  for (int i = 0; i < tam; i++) {
    printf("%d, ", V[i]);
  }
  printf("]\n");
  printf("Tempo demorado para ordenacao do vetor = %f seconds\n",(double)t_1/CLOCKS_PER_SEC);
}
else if (opcOrdena == 2) {
  clock_t t_1; 
  t_1 = clock();
  quickSort(V, tam);
  t_1 = clock() - t_1;
  printf("Vetor Ordenado QuickSort: [ ");
  for (int i = 0; i < tam; i++)
  {
    printf("%d, ", V[i]);
  }
  printf("]\n");
  printf("Tempo demorado para ordenacao do vetor = %f seconds\n",(double)t_1/CLOCKS_PER_SEC);
}

  do {
    printf("\nDigite o numero a ser encontrado: ");
    scanf("%d", &num);
    pesquisaLinear(V, num);
    printf("\nDeseja continuar testando? (1) Continua | (0) Para: ");
    scanf("%d", &opc);

  } while (opc != 0);
  free(*V);
  return 0;
}