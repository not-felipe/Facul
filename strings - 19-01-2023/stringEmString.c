#include <stdio.h>
#include <string.h>

void main(){
char str1[30], str2[30], str3[60];
int posicao, i, j;
printf("Informe string 1:");
scanf(" %30[^\n]", str1);
printf("\nComprimento de str1 %lu", strlen(str1));
printf("\nInforme string 2:");
scanf(" %30[^\n]", str2);
printf("\nComprimento de str2 %lu", strlen(str2));
printf("\nInforme a posição para inserir:");
scanf("%d",&posicao);
if (posicao>strlen(str1))
printf("\nPosição indicada %d é maior que o comprimento do string: %lu",posicao,strlen(str1));
else {
  printf("\nPosição para inserir: %d depois de >%c<", posicao,
str1[posicao-1]);
for (i=0; i<posicao; i++) //transf. 1a parte de str1 p/str3
str3[i]=str1[i];
for (i=0; str2[i]!='\0'; i++) //transfere str2 para str3
str3[posicao+i]=str2[i];
j=strlen(str3);
for (i=posicao; str1[i]!='\0';i++){
//transf. 2a. parte de str1 p/ str3
str3[j]=str1[i];
j++;
}
str3[j]='\0'; // finaliza o string de resultado
printf("\nResultado: %s", str3);
printf("\nComprimento de str3 %lu", strlen(str3));
}
}