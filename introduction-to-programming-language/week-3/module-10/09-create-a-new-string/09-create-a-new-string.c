#include<stdio.h>
#include<string.h>

int main() {
  char S[1001];
  char T[1001];
  scanf("%s%s", S, T);

  int s_length = strlen(S);
  int t_length = strlen(T);

  printf("%d %d\n", s_length, t_length);
  printf("%s %s", S, T);

  return 0;
}