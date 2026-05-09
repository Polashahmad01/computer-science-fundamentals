#include<stdio.h>
#include<string.h>

int main() {
  char s[101], q[101];
  scanf("%s%s", s, q);

  int length = strlen(q);

  for(int i = 0; i <= length; i++) {
    s[i] = q[i];
  }

  printf("%s %s", s, q);
  
  return 0;
}