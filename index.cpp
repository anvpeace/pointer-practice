#include <iostream>

using namespace std;

int main(){


    int a = 8;

    int *p;
    
    p = &a;


    cout << "value of a is equal to: " << *p << " The address of variable a is equal to: " << p << endl;
    cout << "The value of the pointer is equal to: " << &p << endl;
    cout << "value: "<< *&a << endl;



    return 0;
}

// // Exercise 1.

// Declare a variable "a" and initialize it with any value. Then create a pointer variable "p" 
// containing the address of the variable "a". Print out in the console the value and address
// of the variable "a" using both variable "a" and pointer "p".

// eg.
// Output:

// Value of the variable a is equal to: 5
// The address of the variable a is equal to: 0x69fef8
// The value stored in the pointer p is equal to: 0x69fef8
// To get the value of the variable a using pointer p one has to point to the address in the pointer p, *p = 5
// 