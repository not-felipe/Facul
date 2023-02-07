#include <stdio.h>

int main()
{
int i;
int *p0 = &i;
int *p1 = &i + 1;
int *p2 = &i + 2;
int *p3 = p2;
printf("p2 > p0: %d\n", p2 > p0);
printf("p0 > p1: %d\n", p0 > p1);
printf("p2 < p0: %d\n", p2 < p0);
printf("p3 = p2: %d\n", p3 == p2);
return 0;
}