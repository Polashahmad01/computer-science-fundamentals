#include<stdio.h>

int main() {

  int money;
  scanf("%d", &money);

  if(money >= 100) {
    printf("I will eat food.\n");
  }
  else {
    printf("I will not eat.\n");
  }

  return 0;
}
