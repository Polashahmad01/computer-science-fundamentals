#include<stdio.h>

char capital_to_small(char letter);

int main() {
  char ch;
  scanf("%c", &ch);
  
  char result = capital_to_small(ch);
  printf("%c\n", result);

  return 0;
}

char capital_to_small(char letter) {
  char lower_case = letter + 32;
  return lower_case;
}
