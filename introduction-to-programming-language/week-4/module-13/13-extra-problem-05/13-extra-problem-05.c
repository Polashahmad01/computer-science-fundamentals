#include<stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int count = 1;
  
  for(int i = 1; i <= n; i++) {

    char ch = 'A';
    for(int j = 1; j <= count; j++) {
      printf("%c ", ch);
      ch++;
    }

    printf("\n");
    count++;
  }

  return 0;
}