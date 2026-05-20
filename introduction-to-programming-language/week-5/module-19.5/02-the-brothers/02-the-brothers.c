#include<stdio.h>
#include<string.h>

int main() {
  char first_person[100001];
  char second_person[100001];

  fgets(first_person,100001,stdin);
  fgets(second_person,100001,stdin);

  int first_person_size = strlen(first_person);
  int second_person_size = strlen(second_person);

  for(int i = 0; i < first_person_size; i++) {
    printf("%d -- %c\n", first_person[i], first_person[i]);
  }

  // printf("%d %d\n", first_person_size, second_person_size);

  
  return 0;
}
