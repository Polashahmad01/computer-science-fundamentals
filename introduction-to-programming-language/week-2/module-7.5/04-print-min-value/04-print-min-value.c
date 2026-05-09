#include<stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];

  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int min_value = arr[0];
  for(int i = 0; i < n; i++) {
    if(arr[i] < min_value) {
      min_value = arr[i];
    }
  }

  printf("%d\n", min_value);

  return 0;
}
