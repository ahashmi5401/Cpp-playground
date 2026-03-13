//POINTER TO POINTER TO POINTER
#include <iostream>
using namespace std;

main() {
    int a = 10;
    int *ptr = &a; //store address of a 
    int **ptr2 = &ptr; //store address of pointer
    int ***ptr3 = &ptr2; //store address of ptr2

    cout<< "Address of a is =>" << ptr << "\n"; //address of a
    cout << *ptr << "\n"; //10

    cout<< "Address of ptr is =>" << ptr2 << "\n";  //address of ptr 
    cout << **ptr2 << "\n";   //10 

    cout<< "Address of ptr2 is =>" << ptr3 << "\n"; //address of ptr2
    cout << ***ptr3 ; //10
}