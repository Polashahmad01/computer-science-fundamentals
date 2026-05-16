#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int n;
  scanf("%d", &n);
  
  int line = 11 + (n - 1) / 2;
  int space = 5 + (n - 1) / 2;
  int space_2 = 5;
  int star = 1;
  int full_star = line - 5;


  for(int i = 0; i < line; i++) {

    if(i < full_star) {
      for(int k = space; k > 0; k--) {
        printf(" ");
      }

      for(int j = 0; j < star; j++) {
        printf("*");
      }
      star += 2;
      space--;
    } else {
      for(int p = space_2; p > 0; p--) {
        printf(" ");
      }

      for(int i = 0; i < n; i++) {
        printf("*");
      }
    }

    printf("\n");
  }
      
  return 0;
}
