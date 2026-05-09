#include<stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int arra[n];

  for(int i = 0; i < n; i++) {
    scanf("%d", &arra[i]);
  }

  for (int i = 0; i < n; i++)
  {
    if(arra[i] % 2 == 0) {
      printf("%d ", arra[i]);
    }
  }
  

  return 0;
}