#include<stdio.h>
#include<string.h>

int main() {
  char s[50];
  // scanf("%s", s);
  fgets(s,50,stdin);
  printf("%s\n", s);
  
  return 0;
}