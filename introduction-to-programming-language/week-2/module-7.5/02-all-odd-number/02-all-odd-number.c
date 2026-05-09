#include<stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int arra[n];
  int odd_count = 0;

  for(int i = 0; i < n; i++) {
    scanf("%d", &arra[i]);
  }

  for(int i = 0; i <n; i++) {
    if(arra[i] % 2 == 1) {
      odd_count++;
    }
  }

  printf("%d\n", odd_count);

  return 0;
}
