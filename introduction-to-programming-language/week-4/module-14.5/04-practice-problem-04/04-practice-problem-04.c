#include<stdio.h>

char small_to_capital(char letter);

int main() {
  char ch;
  scanf("%c", &ch);

  char result = small_to_capital(ch);
  printf("%c\n", result);
  
  return 0;
}

char small_to_capital(char letter) {
  char upper_case = letter - 32;
  return upper_case;
}
