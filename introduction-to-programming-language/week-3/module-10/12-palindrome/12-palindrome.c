#include<stdio.h>
#include<string.h>

int main() {
  char S[1001];
  scanf("%s", S);

  int length = strlen(S);
  int flag = 1;

  for(int i = 0, j = length - 1; i < j; i++, j--) {
    if(S[i] != S[j]) {
      flag = 0;
      printf("NO\n");
      break;
    }
  }

  if(flag) {
    printf("YES\n");
  }

  return 0;
}