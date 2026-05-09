#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int is_palindrome(char s[]) {
  int length = strlen(s);

  int flag = 1;

  for(int i = 0, j = length - 1; i < j; i++, j--) {
    if(s[i] != s[j]) {
      flag = 0;
    }
  }

  return flag;
}

int main() {
  char S[1001];
  scanf("%s", S);

  int result = is_palindrome(S);
  
  if(result == 1) {
    printf("Palindrome\n");
  } else {
    printf("Not Palindrome\n");
  }
     
  return 0;
}
