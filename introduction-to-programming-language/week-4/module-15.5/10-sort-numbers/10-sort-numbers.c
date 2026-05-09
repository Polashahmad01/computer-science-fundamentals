#include<stdio.h>

int main() {
  int A, B, C;
  scanf("%d%d%d", &A, &B, &C);
  int arr[3];
  arr[0] = A;
  arr[1] = B;
  arr[2] = C;

  for(int i = 0; i < 3 - 1; i++) {
    for(int j = i + 1; j < 3; j++) {
      int temp = arr[i];
      if(arr[i] > arr[j]) {
        arr[i] = arr[j];
        arr[j] = temp; 
      }
    }
  }
  
  for(int i = 0; i < 3; i++) {
    printf("%d\n", arr[i]);
  }

  printf("\n");
  printf("%d\n%d\n%d\n", A, B, C);
  
  return 0;
}