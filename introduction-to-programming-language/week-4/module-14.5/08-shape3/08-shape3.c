#include<stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int star = 1;
  int space = n - 1;

  int star2 = n * 2 - 1;
  int space2 = 1;

  for(int i = 1; i <= n; i++) {

    for(int k = 1; k <= space ; k++) {
      printf(" ");
    }

    for(int j = 1; j <= star; j++) {
      printf("*");
    }

    printf("\n");
    star += 2;
    space--;
  }
  
  for(int o = 1; o <= n; o++) {

    for(int l = 1; l < space2; l++) {
      printf(" ");
    }

    for(int k = 1; k <= star2; k++) {
      printf("*");
    }

    printf("\n");
    star2 -= 2;
    space2++;
  }

  return 0;
}