#include<stdio.h>
#include<stdlib.h>

int main() {
  int n;
  scanf("%d", &n);
  int array[n];

  for(int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  int positive = 0;
  int negative = 0;
  
  for(int i = 0; i < n; i++) {
    if(array[i] > 0) {
      positive += array[i];
    } else if(array[i] < 0) {
      negative -= array[i];
    }
  }

  int result = positive - negative;
  printf("%d\n", abs(result));

  return 0;
}
