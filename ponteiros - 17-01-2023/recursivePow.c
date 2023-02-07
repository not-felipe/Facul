#include<stdio.h>
#include<math.h>

double pot(double n, int e);

int main(){

  double n;
  int e;

  printf("Digite a base da potencia: ");
  scanf("%lf", &n);
  printf("Digite o expoente da potencia: ");
  scanf("%d", &e);
  printf("RESULTADO DA POTENCIA DE [%.0lf]^[%d] NA FUNCAO RECURSIVA = %.0lf\n", n, e, pot(n, e));
  printf("RESULTADO DA POTENCIA DE [%.0lf]^[%d] NA FUNCAO DA BIBLIOTECA MATH.H = %.0lf", n, e, pow(n, e));
  return 0;
}

double pot(double n, int e){

  if(e == 0){
    return 1;
  }
  
  else{
    return  n * pot(n, e - 1);
  }
}