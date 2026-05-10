#include<stdio.h>

void print_recursive(int n, int index) {

  if(index == n+1) {
    return;
  }
  
  printf("%d\n", index);
  print_recursive(n,index += 1);
}

int main() {
  int n;
  scanf("%d", &n);

  int idx = 1;

  print_recursive(n, idx);
  
  return 0;
}
