#include <iostream>
using namespace std;

// Instead of storing a value, pointers store an address, a memory location.

int main(){
  // n is a container that stores an integer value.
  int n = 4;
  cout << "Value stored by the variable n :\n";
  cout << n << endl;
  // How can we access the location of this variable n in the memory ?
  cout << "Location (Adress) of the variable n in the memory:\n";
  cout << &n << endl;
  // A pointer will hold the addess of the value n.
  // **Declaration**
  int * ptr = &n;
  // A certain type of pointer can only point to the same type of variable:
  // --> An integer (type) pointer can only store the memory address of an
  // integer (type) variable.
  cout << "The pointer ptr contains the address of the variable.\n ";
  cout << ptr << endl;
  // How can we access the value in the memory address stored by the pointer?
  cout << "Value in the memory address stored by the pointer:\n";
  cout << *ptr << endl;
  // Can we change the value of  address stored in ptr?
  // * means access the content of memory location stored in ptr
  *ptr = 6;
  cout << "New value stored in the memory address:\n";
  cout << *ptr << endl;
  cout << "Value stored by the variable n:\n";
  cout << n;

  // ***What can we not do?***
  // int* ptr2;
  // *ptr2 = 10;
 // This is wrong since the pointer ptr2 has no address associated to it, it wasn't
 // initialized!
 // First we have to create a variable with same type as the pointer and then initialized
 // the pointer with the variable address.
 // int v;
 // int* ptr2;
 // *ptr2 = &n;
 // *ptr2 = 10;

  return 0;
}
