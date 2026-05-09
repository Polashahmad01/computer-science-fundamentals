#include<stdio.h>
#include<stdbool.h>

int main() {
  char a[101], b[101];
  scanf("%s%s", a, b);

  int i = 0;

  while (true)
  {
    if(a[i] == '\0' && b[i] == '\0') {
      printf("%s - %s are equal.\n", a, b);
      break;
    } else if(a[i] == '\0') {
      printf("%s is smaller.\n", a);
      break;
    } else if(b[i] == '\0') {
      printf("%s is smaller.\n", b);
      break;
    } else if(a[i] < b[i]) {
      printf("%s is smaller.\n", a);
      break;
    } else if(a[i] > b[i]) {
      printf("%s is smaller.\n", b);
      break;
    } else if(a[i] == b[i]) {
      i++;
    }
  }
  
  
  return 0;
}