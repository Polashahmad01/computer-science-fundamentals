#include<stdio.h>
#include<string.h>

int main() {
  char s[101];
  scanf("%s", s);

  int count = strlen(s);
  printf("%d\n", count);
  
  return 0;
}