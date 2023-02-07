#include <stdio.h>
void main() {
int *p1, var;
var = 65;
p1 = &var;
printf("\nEndereco da Var %p", &var);
printf("\nEndereco apontado pelo ponteiro 1: %p", p1);
p1++;
printf("\nSoma p1: %p", p1);
p1--;
printf("\nSubtrai p1: %p", p1);
printf("\nConteudo de Var pelo ponteiro 1: %d", *p1);
}