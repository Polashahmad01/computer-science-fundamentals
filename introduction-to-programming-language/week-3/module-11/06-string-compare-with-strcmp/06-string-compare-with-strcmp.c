#include<stdio.h>
#include<string.h>

int main() {
  char a[101], b[101];
  scanf("%s%s", a, b);

  int val = strcmp(a, b);

  if(val > 0) {
    printf("%s is smaller.\n", b);
  } else if(val < 0) {
    printf("%s is smaller.\n", a);
  } else {
    printf("%s - %s both are equal.\n", a, b);
  }
  
  return 0;
}