/* Fazer uma função para criptografar uma frase substituindo letras por
números como indicado: a=4, e=3, i=1, o=0, s=5, t=7.  */

#include<stdio.h>
#define MAX 100

int main(){

  char frase[MAX];
  scanf("%50[^\n]",frase);
  for(int i = 0; frase[i] != '\0'; i++){
    switch (frase[i])
    {
    case 'a':
    frase[i] = '4';
      break;
    case 'e':
    frase[i] = '3';
      break;
    case 'i':
    frase[i] = '1';
      break;
    case 'o':
    frase[i] = '0';
      break;
    case 's':
    frase[i] = '5';
      break;
    case 't':
    frase[i] = '7';
      break;
    default:
      break;
    }
  }
  
  for(int i=0; frase[i]!='\0';i++){
    printf("%c",frase[i]);
  }

  return 0;
}