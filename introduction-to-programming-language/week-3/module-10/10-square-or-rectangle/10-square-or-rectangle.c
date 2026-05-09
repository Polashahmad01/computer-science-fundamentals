#include<stdio.h>

int main() {
  int T;
  scanf("%d", &T);

  for(int i = 0; i < T; i++) {
    int height;
    int width;
    scanf("%d%d", &height, &width);
    if(height == width) {
      printf("Square\n");
    } else {
      printf("Rectangle\n");
    }
  }

  return 0;
}