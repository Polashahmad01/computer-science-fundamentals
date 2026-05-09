#include<stdio.h>

int char_to_ascii(char letter);

int main() {
  char ch;
  scanf("%c", &ch);

  int result = char_to_ascii(ch);
  printf("%d\n", result);
  
  return 0;
}

int char_to_ascii(char letter) {
  int ascii_val = letter;
  return ascii_val;
}
