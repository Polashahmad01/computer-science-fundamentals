#include<stdio.h>

int main() {

  int taka;
  scanf("%d", &taka);

  if(taka >= 100) {
    printf("I will eat 3 items.\n");
  }
  else if(taka >= 50) {
    printf("I will eat 2 items.\n");
  }
  else if (taka >= 20) {
    printf("I will eat 1 items.\n");
  }
  else {
    printf("I will not eat any items.\n");
  }

  return 0;
}
