#include <stdio.h>									
#include <math.h>

void main() {

  double anguloEmGraus, angulo;
  int option;

  do{
    printf("Deseja utilizar o angulo em graus ou em radianos?\nEscolha uma opcao:\n[1] Graus\n[2] Radianos\n[0] Encerra Programa\n");
    scanf("%d", &option);
    switch(option){
      case 0:
        printf("Programa Encerrado!");
        break;
      case 1:
        printf("Digite o valor do angulo: ");
        scanf("%lf", &anguloEmGraus);
        angulo = anguloEmGraus * 3.141592653589793 / 180;
        printf("O cosseno de %.lf = %.3lf aproximadamente\n", anguloEmGraus, cos(angulo));
        printf("O seno de %.lf = %.3lf aproximadamente\n", anguloEmGraus, sin(angulo));
        break;
      case 2:
        printf("Digite o valor do angulo: ");
        scanf("%lf", &angulo);
        printf("O cosseno de %.3lf = %.3lf aproximadamente\n", angulo, cos(angulo));
        printf("O seno de %.3lf = %.3lf aproximadamente\n", angulo, sin(angulo));
        break;
      default:
        printf("Opcao invalida!!");
        break;
    }
  }while(option != 0);
  
}