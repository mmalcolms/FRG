#include <iostream>
using namespace std;

void sum(int number);

int main(){
  int num;
  cout << "Enter a positive integer number:";
  cin >> num;
  sum(num);
  return 0;
}

void sum(int number){
  int summation = 1;
  cout << "Initial sum value = " << summation << endl;
  for (int i = 2; i <= number; i++){
    summation += i;
    cout << "i = " << i << " and sum = " << summation << endl;
  }
}
