#include<stdio.h>

int main() {
  
  int taka;
  scanf("%d", &taka);

  if(taka >= 5000) {
    printf("Will go Cox's Bazar\n");
    if(taka >= 10000) {
      printf("Will go Saint Martin\n");
    }
    else {
      printf("Will not go to Saint Martin\n");
    }
  }
  else {
    printf("Will not go anywhere\n");
  }

  return 0;
}
