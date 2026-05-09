#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int N;
  scanf("%d", &N);
  int symbol = 1;
  int space = N - 1;

  for(int i = 1; i <= N; i++) {

    for(int k = 1; k <= space; k++) {
      printf(" ");
    }

    for(int j = 1; j <= symbol; j++) {
      if(i % 2 == 1) {
        printf("#");
      } else {
        printf("-");
      }
    }

    printf("\n");
    symbol += 2;
    space--;
  }

  int second_symbol = symbol - 4;
  int second_space = 1;

  for(int i = 1; i <= N - 1; i++) {

    for(int k = 1; k <= second_space; k++) {
      printf(" ");
    }

    for(int j = 1; j <= second_symbol; j++) {
      if((N + i) % 2 == 1) {
        printf("#");
      } else {
        printf("-");
      }
    }

    printf("\n");
    second_symbol -= 2;
    second_space++;
  }
  
  return 0;
}
