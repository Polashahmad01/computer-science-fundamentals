#include<stdio.h>
#include<stdbool.h>

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
    bool is_seconday_diagonal_matrix = true;

    for(int i = 0; i < row; i++) {
      for(int j = 0; j < col; j++) {
        if(i + j != row - 1 && a[i][j] != 0) {
          is_seconday_diagonal_matrix = false;
        }
      }
    }

    if(is_seconday_diagonal_matrix) {
      printf("This is a secondary diagonal matrix.\n");
    } else {
      printf("This is not a secondary diagonal matrix.\n");
    }

  } else {
    printf("This is not a square matrix.\n");
  }
  
  return 0;
}
