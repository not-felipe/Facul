#include <stdio.h>
#include <string.h>
void main() {
char *nomeArquivo = "exemplo.txt";
char linha[101], palavra[11];
char * posicao;
int ct = 0;
printf("Qual palavra pesquisar(até 10 letras):\n");
scanf("%s[10]\n", palavra);
FILE *arquivo = fopen(nomeArquivo, "r");
while (fgets(linha, 100,arquivo) != NULL) {
ct++;
posicao = strstr(linha, palavra);
if(posicao != NULL){
printf("Palavra encontrada na linha %d na posição %ld\n",ct, posicao - linha);
printf("Linha %d: %s",ct, linha);
fclose(arquivo);
return;
} // if
} // while
printf("Substring não encontrada nas %d linhas lidas!\n", ct);
} // main