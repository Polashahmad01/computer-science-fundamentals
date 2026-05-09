#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {

  int ceilVal = ceil(4.3);
  printf("Ceil -> %d\n", ceilVal);

  int floorVal = floor(4.3);
  printf("Floor -> %d\n", floorVal);

  int roundVal = round(4.3);
  printf("Round -> %d\n", roundVal);

  int sqrtVal = sqrt(25);
  printf("Sqrt -> %d\n", sqrtVal);

  int powVal = pow(25, 2);
  printf("Pow -> %d\n", powVal);

  int absVal = abs(-25);
  printf("Abs -> %d\n", absVal);

  return 0;
}