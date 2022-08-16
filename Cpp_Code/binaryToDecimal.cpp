#include <iostream>
#include <cmath>

using namespace std;

int convert(long long num) {
  int dec = 0, i = 0, rem;

  while (num!=0) {
    rem = num % 10;
    num /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}

int main() {
  long long binary_num;
  cout << "Enter the binary number :- ";
  cin >> binary_num;
  cout << "Binary Number : " << binary_num << " is equal to :  " << convert(binary_num) << "  in Decimal";
}