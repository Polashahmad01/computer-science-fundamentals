#include<stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int array[n];
  for(int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  int x;
  scanf("%d", &x);
  int idx = -1;

  for(int i = 0; i < n; i++) {
    if(array[i] == x) {
      idx = i;
      break;
    }
  }
  
  printf("%d\n", idx);

  return 0;
}