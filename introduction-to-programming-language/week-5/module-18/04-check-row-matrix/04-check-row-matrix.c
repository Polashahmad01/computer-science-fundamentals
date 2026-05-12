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

  if(row == 1) {
    printf("This is a row matrix.\n");
  } else {
    printf("This is not a row matrix.\n");
  }
  
  return 0;
}
