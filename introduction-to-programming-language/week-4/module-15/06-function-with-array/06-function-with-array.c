#include<stdio.h>

void fun(int a[]) {
  // a[1] = 200;
  printf("Fun function: %p\n", a);
  printf("Fun function: %d\n", *a);
}

int main() {
  int a[5] = {10, 20, 30, 40, 50};
  
  fun(a);
  printf("Main function: %p\n", a);

  for(int i = 0; i < 5; i++) {
    printf("%d ", a[i]);
  }
  
  return 0;
}