#include <iostream>
# include <typeinfo>
using namespace std;

// **VOID POINTER**
// It can hold the address of a variable of any other type.
// But it has an disadvantage, we can't directly derefence a void pointer.
// DEREFERENCE A POINTER means access the value stored in the memory address
// that pointer points out (* operation).
void printNumber(int* numberPtr);
void printLetter(char* charptr);
// How can we create a function that prints out any data type?
// Answer: void pointer.
void print(void* ptr, char type);

int main(){
    int number = 5;
    char letter = 'a';
    float pointNumber = 12.2;
    //printNumber(&number);
    //printLetter(&letter);
    //cout << typeid(number).name();
    print(&number, 'i');
    print(&letter, 'c');
    print(&pointNumber, 'f');
    
  return 0;
}

void print(void* ptr, char type){
  // This variable type will tell how we should deference the pointer.
  switch (type) {
    case 'i': cout << *((int*)ptr) << endl;  break;  //handle int*
    case 'c': cout << *((char*)ptr) << endl; break; //handle char*
    case 'f': cout << *((float*)ptr) << endl;break; //handle float*
  }

}

void printNumber(int* numberPtr){
  cout << *numberPtr << endl;
}

void printLetter(char* charptr){
  cout << *charptr << endl;
}
