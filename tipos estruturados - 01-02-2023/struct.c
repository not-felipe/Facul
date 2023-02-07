/* Captura e imprime as coordenadas de um ponto qualquer */
#include <stdio.h>

struct ponto {
  float x;
  float y;
};

void captura (struct ponto* pp){
  struct ponto t;
  printf("Digite as coordenadas do ponto(x y): ");
  scanf("%f %f", &pp->x , &pp->y);
  t = *pp;
  imprime(t);
}

void imprime (struct ponto pp){ 
  printf("O ponto fornecido foi: (%.2f,%.2f)\n", pp.x, pp.y); 
}

int main (void){

  struct ponto p;

  captura(&p);
  p.x += 10;
  p.y += 10;
  imprime(p);

return 0;
}