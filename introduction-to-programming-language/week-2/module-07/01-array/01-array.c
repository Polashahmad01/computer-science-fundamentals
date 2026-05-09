#include<stdio.h>
int main() {
  int array[5];

  array[2] = 100;
  array[3] = 20;
  array[1] = 10;

  printf("%d\n", array[3]);

  return 0;
}