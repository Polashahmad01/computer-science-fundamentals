#include<stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];

  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int i = 0;
  int j = n - 1;
  int is_palindrome = 0;

  if(n == 1) {
    is_palindrome = 1;
  }

  while (i < j)
  {
    if(arr[i] == arr[j]) {
      is_palindrome = 1;
    } else {
      is_palindrome = 0;
    }
    
    i++;
    j--;
  }
  
  if (is_palindrome) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  

  return 0;
}