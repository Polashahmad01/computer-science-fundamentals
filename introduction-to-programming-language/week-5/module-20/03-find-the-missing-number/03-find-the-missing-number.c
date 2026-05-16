#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int t;
  scanf("%d", &t);

  while (t--)
  {
    long long int m;
    int a, b, c;
    scanf("%lld", &m);
    scanf("%d%d%d", &a, &b, &c);

    int product = a * b * c;

    if(m == 0) {
      printf("%d\n", 0);
    } else if(m % product == 0) {
      printf("%lld\n", m / product);
    } else {
      printf("%d\n", -1);
    }
  }
  
  
  return 0;
}
