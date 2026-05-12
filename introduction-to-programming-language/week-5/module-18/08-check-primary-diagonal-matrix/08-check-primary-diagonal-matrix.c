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
    bool is_primary_diagnoal_matrix = true;

    for(int i = 0; i < row; i++) {
      for(int j = 0; j < col; j++) {
        if(i != j && a[i][j] != 0) {
          is_primary_diagnoal_matrix = false;
        }
      }
    }

    if(is_primary_diagnoal_matrix) {
      printf("This is a primary diagnoal matrix.\n");
    } else {
      printf("This is not a primary diagnoal matrix.\n");
    }

  } else {
    printf("This is not a square matrix.\n");
  }
  
  return 0;
}
