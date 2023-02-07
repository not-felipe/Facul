#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  char str[] = "Departamento de Computac";
  char str2[100];
  char * ptr;
  ptr = strstr(str, "Comp");
  strncpy(str2, ptr, 7);
  puts(str2);
  puts(ptr);
  str2[7] = '\0';
  puts(str2);
  return 0;
}