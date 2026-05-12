#include<stdio.h>

int main() {
  int row, col;
  scanf("%d%d", &row, &col);
  int a[row][col];

  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  if(row == col) {
    printf("This is a square matix.\n");
  } else {
    printf("This is not a square matrix.\n");
  }
  
  return 0;
}
