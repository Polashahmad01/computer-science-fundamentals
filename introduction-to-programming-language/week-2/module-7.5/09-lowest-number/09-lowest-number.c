#include<stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int a[n+1];

  for(int i = 1; i < n; i++) {
    scanf("%d", &a[i]);
  }

  int low_val = a[0];
  int low_idx = 0;

  for(int i = 1; i < n; i++) {
    if(a[i] < low_val) {
      low_val = a[i];
      low_idx = i;
    }
  }

  printf("%d %d\n", low_val, low_idx);

  return 0;
}
