#include<stdio.h>

void print_from_n_to_1(int n) {

  if(n == 0) {
    return;
  }

  if(n == 1) {
    printf("%d", n);
  } else {
    printf("%d ", n);
  }
  print_from_n_to_1(n-1);
}

int main() {
  int N;
  scanf("%d", &N);

  print_from_n_to_1(N);
  
  return 0;
}