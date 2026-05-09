#include<stdio.h>
int main() {
  char ch;
  scanf("%c", &ch);

  if(ch == 'z') {
    printf("%c\n", ch - 25);
  } else if(ch >= 'a' || ch <= 'z') {
    printf("%c\n", ch + 1);
  }

  return 0;
}
