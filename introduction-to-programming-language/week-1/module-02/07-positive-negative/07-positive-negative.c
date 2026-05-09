#include<stdio.h>

int main() {

  int n;
  scanf("%d", &n);

  if(n > 0) {
    printf("POSITIVE\n");
  }
  else if(n < 0){
    printf("NEGATIVE\n");
  }
  else {
    printf("ZERO\n");
  }

  return 0;
}
