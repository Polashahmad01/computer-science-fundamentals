#include<stdio.h>

void print_digit(int n) {
  if(n == 0) {
    return;
  }
  int last = n % 10;
  print_digit(n / 10);
  printf("%d ", last);
}


int main() {
  int T;
  scanf("%d", &T);

  for(int i = 0; i < T; i++) {
    int x;
    scanf("%d", &x);
    if(x == 0) {
      printf("%d ", 0);
    }
    print_digit(x);
    printf("\n");
  }
  
  return 0;
}
