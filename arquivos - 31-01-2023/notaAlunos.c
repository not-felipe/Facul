#include<stdio.h>
#include<stdlib.h>

int main(void){
  float p1, p2, p3, media;
  FILE *ent, *sai;

  ent = fopen("entrada.txt","r");
  sai = fopen("saida.txt","w");

  while(fscanf(ent,"%f %f %f",&p1, &p2, &p3) == 3){
    media = (p1 + p2 + p3)/3;
    fprintf(sai, "%.1f", media);
    if(media >= 5) fprintf(sai, " A\n");
    else fprintf(sai, " R\n");
  }

  fclose(ent);
  fclose(sai);

  return 0;
}