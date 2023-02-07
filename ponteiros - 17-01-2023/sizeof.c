#include <stdio.h>
void main()
{
char carac;
int inteiro;
double duplo;
int *pint;
char *pcarac;
double *pdup;
pcarac = &carac;
pint = &inteiro;
pdup = &duplo;
printf("Tamanho int %ld valor = %p\n", sizeof(inteiro),&inteiro);
printf("Tamanho double %ld valor = %p\n", sizeof(duplo),&duplo);
printf("Tamanho char %ld valor = %p\n", sizeof(carac),&carac);
printf("Tamanho de um pnteiro de inteiro = %ld valor = %p\n", sizeof(pint),pint);
printf("Tamanho de um ponteiro de double = %ld valor = %p\n", sizeof(pdup),pdup);
printf("Tamanho de um ponteiro de char = %ld valor = %p\n", sizeof(pcarac),pcarac);
}