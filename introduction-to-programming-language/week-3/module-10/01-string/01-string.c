#include<stdio.h>

int main() {
  char s[6];
  for(int i = 0; i < 6; i++) {
    scanf("%c", &s[i]);
  }

  for(int i = 0; i < 6; i++) {
    printf("%c\n", s[i]);
  }

  return 0;
}