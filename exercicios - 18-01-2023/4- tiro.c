#include<stdio.h>
#include<math.h>
#define PI 3.1415

int main(){

  float raio, comprimento, lado;
  
  printf("Digite o comprimento do retangulo: ");
  scanf("%f", &comprimento);
  printf("Digite o lado do retangulo: ");
  scanf("%f", &lado);
  printf("Digite o raio do circulo: ");
  scanf("%f", &raio);

  float areaCirculo = PI * pow(raio,2);
  float areaQuadrado = lado * comprimento;



  return 0;
}

