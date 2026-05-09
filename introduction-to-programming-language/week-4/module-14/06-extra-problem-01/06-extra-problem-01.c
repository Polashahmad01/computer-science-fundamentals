#include<stdio.h>

void swap(int first_number, int second_number);

int main() {
  int x, y;
  scanf("%d%d", &x, &y);
  swap(x, y);
  
  return 0;
}

void swap(int first_number, int second_number) {
  int a[2];
  a[0] = first_number;
  a[1] = second_number;
  int temp = a[0];
  a[0] = a[1];
  a[1] = temp;
  
  for(int i = 0; i < 2; i++) {
    printf("%d ", a[i]);
  }
}
