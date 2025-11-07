#include <iostream>

using namespace std;

int sum(int a, int b) {
  return a + b;
}

double sum(double a, double b) {
  return a + b;
}

int main() {
  cout << sum(3, 4) << "\n";
  cout << sum(4.5, 6.7) << "\n";

}
