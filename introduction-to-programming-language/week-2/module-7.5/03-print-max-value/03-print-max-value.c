#include<stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];

  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int max_value = arr[0];
  for(int i = 0; i < n; i++) {
    if(arr[i] > max_value) {
      max_value = arr[i];
    }
  }

  printf("%d\n", max_value);

  return 0;
}
