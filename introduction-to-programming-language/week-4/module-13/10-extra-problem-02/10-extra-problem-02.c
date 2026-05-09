#include<stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int space = n - 1;
  int count = 1;

  for(int i = 1; i <= n; i++) { // Line

    for(int k = 1; k <= space; k++) { // Space
      printf(" ");
    }
    
    for(int j = 1; j <= count; j++) { // Numbers
      printf("%d ", j);
    }
    printf("\n");
    count++;
    space--;
  }
  
  return 0;
}