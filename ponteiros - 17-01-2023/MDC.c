#include <stdio.h>
int mdc (int x, int y) {
  int r = x % y;
  if (r==0)
    return y;
  else
    return mdc(y, r);
}

void main (void){
  int x, y, z;

  do{
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);
    printf("Digite o valor de Z: ");
    scanf("%d", &z);
    
    printf("\nMDC de %d, %d, %d = %d\n\n",x,y,z,mdc((x,y),z));
  }while(x!=0 && y!=0 && z!=0);
}