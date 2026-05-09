#include<stdio.h>
int main() {
  int a;
  scanf("%d", &a);

  int first_digit = a / 10;
  int last_digit = a % 10;

  if(first_digit % last_digit == 0 || last_digit % first_digit == 0) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }

  return 0;
}