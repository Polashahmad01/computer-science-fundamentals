#include<iostream>
#include<iomanip>

using namespace std;

int main() {
  double x = 3.235235;

  cout << fixed << setprecision(1) << x << endl;
  cout << fixed << setprecision(2) << x << endl;

  return 0;
}
