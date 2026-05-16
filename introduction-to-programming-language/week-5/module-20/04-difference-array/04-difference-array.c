#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int t;
  scanf("%d", &t);

  for(int i = 0; i < t; i++) {
    int n;
    scanf("%d", &n);
    int a[n];
    int b[n];
  
    for(int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
    }
  
    for(int j = 0; j < n; j++) {
      b[j] = a[j]; 
    }
    
    for(int i = 0; i < n -1; i++) {
      for(int j = i + 1; j < n; j++) {
        if(b[i] > b[j]) {
          int temp = b[j];
          b[j] = b[i];
          b[i] = temp;
        }
      }
    }

    int c[n];
  
    for(int i = 0; i < n; i++) {
      c[i] = a[i] - b[i];
    }
    
    for(int i = 0; i < n; i++) {
      printf("%d ", abs(c[i]));
    }
    printf("\n");
  }

  return 0;
}
