#include<stdio.h>
#include<stdlib.h>
#define PROVAS 4
#define ALUNOS 11

int main(){

  float notas[ALUNOS][PROVAS];
  for(int i = 0; i < ALUNOS - 1; i++){
    float somaAlunos = 0;
    for(int j = 0; j < PROVAS - 1; j++){
      notas[i][j] = (float)(rand() % 11);
      somaAlunos += notas[i][j];
    }
    notas[i][3] = somaAlunos/3;	
  }

  for(int i = 0; i < ALUNOS; i++){
    printf("\n");
    for(int j = 0; j < PROVAS; j++){
      printf("[%.1f] ",notas[i][j]);
    }
  }



  return 0;
}