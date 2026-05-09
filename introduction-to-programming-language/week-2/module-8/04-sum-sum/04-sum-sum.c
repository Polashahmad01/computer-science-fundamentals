#include<stdio.h>
int main() {
  int n;
  scanf("%d", &n);

  int pos_sum = 0;
  int neg_sum = 0;

  for(int i = 1; i <= n; i++) {
    int x;
    scanf("%d", &x);
    if(x > 0) {
      pos_sum += x;
    } else if(x < 0) {
      neg_sum += x;
    }
  }

  printf("%d %d", pos_sum, neg_sum);

  return 0;
}