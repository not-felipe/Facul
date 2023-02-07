#include <stdio.h>
void func (int n) {

printf("%d\n", n);
if (n > 0) {
func(n-1);
printf("* ");
  }
}

int main() {
  int n = 5;
  func(n);
}
