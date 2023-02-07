#include <stdio.h>
void main(){
int *p1,**p2, ***p3, var; //variável int e ponteiros para a variável int
var = 97;
p1 = &var; //ponteiro 1 recebe o endereço de var
p2 = &p1; //ponteiro 2 recebe o endereço de ponteiro 1
p3 = &p2; //ponteiro 3 recebe o endereço de ponteiro 2
printf("\nEndereço da Var %p", &var);
printf("\nEndereço do ponteiro 1: %p",&p1);
printf("\nEndereço do ponteiro 2: %p",&p2);
printf("\nEndereço do ponteiro 3: %p",&p3);
printf("\nEndereço apontado pelo ponteiro 1: %p",p1);
printf("\nEndereço apontado pelo ponteiro 2: %p",p2);
printf("\nEndereço apontado pelo ponteiro 3: %p",p3);
printf("\nConteúdo de Var:%d",var);
printf("\nConteúdo de Var pelo ponteiro 1:%d",*p1);
printf("\nConteúdo de Var pelo ponteiro 2:%d",**p2);
printf("\nConteúdo de Var pelo ponteiro 3:%d",***p3);
}