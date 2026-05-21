#include<iostream>
using namespace std;

int main() {

  // int a[5]; // static array
  int* b = new int[5];

  for(int i = 0; i < 5; i++) {
    // cin >> a[i];
    cin >> b[i];
  }

  for(int i = 0; i < 5; i++) {
    // cout << a[i] << " ";
    cout << b[i] << " ";
  }

  return 0;
}
