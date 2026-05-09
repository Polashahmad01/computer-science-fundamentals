#include<stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int val = 1;
  int space = n - 1;

  for(int i = 1; i <= n; i++) { // Print Line

    for(int k = 1; k <= space; k++) { // Print space
      printf(" ");
    }

    for(int j = 1; j <= val; j++) { // Print numbers
      printf("%d", j);
    }

    printf("\n");
    val++;
    space--;
  }
  
  return 0;
}