#include<stdio.h>

int count_odd(int a[], int n) {
  int odd = 0;

  for(int i = 0; i < n; i++) {
    if(a[i] % 2 == 1) {
      odd++;
    }
  }

  return odd;
}

int main() {
  int n;
  scanf("%d", &n);
  int a[n];

  for(int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  int result = count_odd(a, n);
  printf("%d\n", result);
  
  return 0;
}