#include <iostream>
using namespace std;

int func1(int x, int y) {
  return x + y;
}

double func2(double x, double y) {
  return x + y;
}

int main() {
  
  int num1 = func1(8, 5);
  double Num2 = func2(4.3, 6.26);
  cout << "Int: " << Num1 << "\n";
  cout << "Double: " << Num2 << endl;
  
  return 0;
}
