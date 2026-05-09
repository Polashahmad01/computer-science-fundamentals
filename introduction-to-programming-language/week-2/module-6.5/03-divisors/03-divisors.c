#include<stdio.h>
int main() {
  int n;
  scanf("%d", &n);

  for(int i = 1; i <= n; i++) {
    if(i > 0 && n % i == 0) {
      printf("%d\n", i);
    }
  }

  return 0;
}