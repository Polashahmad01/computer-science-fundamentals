#include<stdio.h>
#include<string.h>

int main() {
  char S[100001];
  scanf("%s", S);
  int size = strlen(S);

  for(int i = 0; i < size; i++) {
    if(S[i] == ',') {
      S[i] = ' ';
    } else if(S[i] <= 'z' && S[i] >= 'a') {
      S[i] = S[i] - 32;
    } else if(S[i] <= 'Z' && S[i] >= 'A') {
      S[i] = S[i] + 32;
    }
  }

  for(int i = 0; i < size; i++) {
    printf("%c", S[i]);
  }

  return 0;
}