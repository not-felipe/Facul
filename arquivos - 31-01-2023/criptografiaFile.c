#include<stdio.h>
#include<string.h>

int main(void){

  char lido[1000];
  FILE *entrada = fopen("textoAntes.txt", "r");
  FILE *saida = fopen("textoDepois.txt", "w");

    while(fgets(lido, 1000, entrada) != NULL){
        for(int i = 0; lido[i] != '\0'; i++){
        switch(lido[i]){
            case 'a': 
              lido[i] = '4';
            break;
            case 'e': 
              lido[i] = '3';
            break;
            case 'i': 
              lido[i] = '1';
            break;
            case 'o': 
              lido[i] = '0';
            break;
            case 's': 
              lido[i] = '5';
            break;
            case 't': 
              lido[i] = '7';
            break;
            default:
            break;
    }
  }
  for(int i = 0; lido[i] != NULL; i++){
  fprintf(saida, "%c", lido[i]);
  }
  }
  
  fclose(entrada);
  fclose(saida);

  return 0;
}