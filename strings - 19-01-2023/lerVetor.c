#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int main(){

  int V[MAX], I[MAX];

  for(int i = 0; i < MAX; i++){
    V[i] = rand() % 100;
    I[MAX - 1 - i] = V[i];
  }

  for(int i = 0; i < MAX; i++){
    printf("V: %d | I: %d\n", V[i], I[i]);
  }

  return 0;
}