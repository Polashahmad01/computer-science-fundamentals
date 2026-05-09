#include<stdio.h>
#include<stdlib.h>

int my_abs(int n) {
  return abs(n);
}

int main() {
  int n;
  scanf("%d", &n);

  int result = my_abs(n);
  printf("%d\n", result);
  
  return 0;
}
