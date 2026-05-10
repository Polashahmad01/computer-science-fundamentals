#include<stdio.h>

void hello(int i) {

  if(i == 11) {
    return;
  }

  printf("%d\n", i);
  hello(1+i);

}

int main() {

  int i = 1;
  hello(i);
  
  return 0;
}