#include <iostream>
using namespace std;

int main() {
  double tempf;
  double tempc;
  cout << "Pon los grados que quieras en Fahrenheit: \n \n";
  cin >> tempf;
  tempc = (tempf - 32) / 1.8;
  cout << "\n";
  cout << "The temp is " << tempc << " degrees Celsius.\n \n";
  system("pause");
  return 0;

}