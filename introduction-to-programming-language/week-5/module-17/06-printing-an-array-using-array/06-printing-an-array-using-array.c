#include<stdio.h>

void print_array(int a[], int n, int idx) {

  if(idx == n) {
    return;
  }

  printf("%d ", a[idx]);

  print_array(a,n, idx = idx + 1);
}

int main() {
  int n;
  scanf("%d", &n);
  int a[n];

  for(int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  int start = 0;

  print_array(a,n,start);
  
  return 0;
}
