#include<stdio.h>
int main() {
  int x;
  scanf("%d", &x);

  int r;
  while (x / 10 != 0)
  {
    x = x / 10;
    r = x % 10;
  }

  if(r % 2 == 0) {
    printf("EVEN\n");
  } else {
    printf("ODD\n");
  }
  

  return 0;
}