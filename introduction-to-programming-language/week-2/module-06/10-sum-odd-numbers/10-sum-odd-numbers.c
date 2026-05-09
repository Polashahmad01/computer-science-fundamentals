#include<stdio.h>
int main() {
  int T;
  scanf("%d", &T);

  while (T--)
  {
    int x, y;
    scanf("%d%d", &x, &y);

    int start = x < y ? x : y;
    int end = x > y ? x : y;
    int sum = 0;

    for(int i = start + 1; i < end; i++) {
      if(i % 2 != 0) {
        sum += i;
      }
    }

    printf("%d\n", sum);
  }
  

  return 0;
}