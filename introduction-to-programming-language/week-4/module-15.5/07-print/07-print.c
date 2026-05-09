#include<stdio.h>

void print_one_to_n(int n) {
  for(int i = 1; i <= n; i++) {
    if(i == n) {
      printf("%d", i);
    } else {
      printf("%d ", i);
    }
  }
}

int main() {
  int N;
  scanf("%d", &N);

  print_one_to_n(N);
  
  return 0;
}