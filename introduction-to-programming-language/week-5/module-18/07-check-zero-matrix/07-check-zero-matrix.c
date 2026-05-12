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

  int size_of_matrix = row * col;
  int count_zero = 0;

  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      if(a[i][j] == 0) {
        count_zero++;
      }
    }
  }
  
  if(size_of_matrix == count_zero) {
    printf("This is a zero matrix.\n");
  } else {
    printf("This is not a zero matrix.\n");
  }

  return 0;
}
