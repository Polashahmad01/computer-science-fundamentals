#include<stdio.h>

long long int recur(long long int n) {
  
  if(n == 1) {
    return 1;
  }

  long long int val = recur(n-1);
  return val * n;
}

int main() {
  long long int N;
  scanf("%lld", &N);

  long long int result = recur(N);
  printf("%lld", result);
  
  return 0;
}
