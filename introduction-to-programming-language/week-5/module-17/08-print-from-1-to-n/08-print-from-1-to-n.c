#include<stdio.h>

void print_number(int i, int n) {

  if(i == n+1) {
    return;
  }

  printf("%d\n", i);
  print_number(i = i+1, n);
}

int main() {
  int N;
  scanf("%d", &N);

  print_number(1, N);
  
  return 0;
}