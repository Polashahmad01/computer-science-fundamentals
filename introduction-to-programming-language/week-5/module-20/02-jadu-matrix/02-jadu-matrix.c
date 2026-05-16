#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

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
    bool is_cell_value_zero = true;
    bool is_primary_diagonal = true;
    bool is_secondary_diagonal = true;

    for(int i = 0; i < row; i++) {
      for(int j = 0; j < col; j++) {
        if(i != j && i + j != row - 1) {
          if(a[i][j] != 0) {
            is_cell_value_zero = false;
          }
        }
        
        if(i == j) {
          if(a[i][j] != 1) {
            is_primary_diagonal = false;
          }
        }
        
        if(i + j == row -1 && a[i][j] != 1) {
          is_secondary_diagonal = false;
        }
      }
    }

    if(is_primary_diagonal && is_secondary_diagonal && is_cell_value_zero) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }

  } else {
    printf("NO\n");
  }

  return 0;
}