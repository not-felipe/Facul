#include <stdio.h>
int fat_rec(int i) {
if (i==0)

return(1);

else

return (i * fat_rec (i-1));

}

void main() {
int n, f;

printf ("\n Digite um numero inteiro: ");
scanf("%d",&n);

if (n<=0)
f = 1;

else
f=fat_rec(n);

printf ("Fatorial de [%d] = %d\n", n, f);

}