#include<stdio.h>
#include<math.h>

void main(){

  double n;

  printf("Digite um numero cujo deseje calcular o logaritmo natural: ");
  scanf("%lf",&n);
  printf("Logaritmo natural de %.3lf = %.3lf", n, log(n));
} 