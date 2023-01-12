#include <iostream>
using namespace std;

long int factorial(int number);
long int factorial2(int number);

int main() {
  int num;
  cout << "Enter an integer number: ";
  cin >> num;

  if (num < 0)
    cout << "Invalid operation! \n";
  else{
    cout << num << "! = " << factorial(num) << " (for loop).\n";
    cout << num << "! = " << factorial2(num) << " (recursion). \n";
  }

  return 0;
}

long int factorial(int number){
  long int fac=1;

  for (int i=2; i<=number; i++)
    fac *= i;
  return fac;

}

long int factorial2(int number){
  // arguments to the ternary operator are expressions, not statements
  // it cannot be used here!
  if (number == 0 || number == 1)
    return 1;
  else
    return number * factorial2(number - 1);
}
