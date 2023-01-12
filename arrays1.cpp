#include<iostream>
using namespace std;

// 1) Arrays have a predetermined length.
// 2) An array can store only a single type of data.
// 3) The array index starts at 0.
// Arrays allocate data in a fixed chunck of memory and stores it in a continuous
// memory and not randomly (ex. linked lists)!!
int main(){
  // Let's calculate the total amount of money and the average over months
  // that someone can save up to one year --> 12 months
  string monthsName[12] = {"January", "February", "March", "April", "May", "June",\
   "July", "August", "September", "October", "November", "December"};

  // To give the size of the array externally we need **Dynamic Arrays**
  // ** Recent C++ versions allow the user specify the size of array.**
  int    numberMonths;
  do {
      cout << "Enter the number of months:\n";
      cin >> numberMonths;
  } while(numberMonths > 12);

  float monthsArray[numberMonths];
  float avgMonth, totalAmount = 0;
  for (int i = 0; i < numberMonths; i++){
    cout << "Amount saved in month " << monthsName[i] << " : ";
    cin >> monthsArray[i];
    totalAmount += monthsArray[i];
  }
  avgMonth = totalAmount/numberMonths;
  cout << "You have saved " << totalAmount << " euros during " << numberMonths << " months.\n";
  cout << "On average you have saved " << avgMonth << " euros per month.\n";
  return 0;
}
