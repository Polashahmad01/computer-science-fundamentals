#include<stdio.h>

int main() {

  int x = 10;
  printf("%d\n", x);
  printf("%p\n", &x); // Normal variable with it's address.

  int *pointer_variable = &x; // Pointer variable which stores the address of x variable.
  printf("%p\n", pointer_variable);
  printf("%d\n", *pointer_variable); // Acessing value of a pointer variable.
  
  return 0;
}