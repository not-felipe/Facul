/* fat_iterativa.c */
#include <stdio.h>
#include <stdlib.h>
int fat_it(int n)
{

int i, fati=1;
for (i=1; i<=n; i++)
fati = fati * i;

return fati;

}
void main()
{

int n, f;
printf ("\n Digite um numero inteiro:");
scanf("%d",&n);
if (n<0)

f = 1;

else

f = fat_it(n);

printf ("Fatorial de [%d] = %d", n, f);
}