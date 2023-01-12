#include <iostream>
using namespace std;

long int sum(int number);
long int sum2(int number);

int main(){
  int num;
  cout << "Enter a positive integer number:";
  cin >> num;

  if (num < 0)
    cout << "Invalid operation!\n";
  else{
    cout << "The sum from 1 to " << num << " is " << sum(num) << " (for loop).\n";
    cout << "The sum from 1 to " << num << " is " << sum2(num) << " (recursion).\n";
  }
  return 0;
}

long int sum(int number){
  int summation = 1;
  if (number == 0)
    return 0;
  else{
    for (int i = 2; i <= number; i++){
      summation += i;
    }
    return summation;
  }
}

long int sum2(int number){
  if (number == 0)
    return 0;
  else
    return number + sum2(number-1);
}
