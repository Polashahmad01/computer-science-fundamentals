#include<stdio.h>
#include<string.h>

void fun(char s[]) {
  int length = strlen(s);

  printf("%s\n", s);
  printf("%d\n", length);
}

int main() {
  char s[10];
  scanf("%s", s);

  fun(s);

  printf("%s\n", s);

  return 0;
}
