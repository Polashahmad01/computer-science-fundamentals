#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int N;
  scanf("%d", &N);
  int start = 1;
  int space = N - 1;

  for(int i = 1; i <= N; i++) {

    for(int k = 1; k <= space; k++) {
      printf(" ");
    }

    for(int j = start; j >= 1; j--) {
      printf("%d", j);
    }

    printf("\n");
    start++;
    space--;
  }
    
  return 0;
}
