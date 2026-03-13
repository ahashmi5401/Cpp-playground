 //POINTER TO POINTER
#include <iostream>
using namespace std ;

main() {
    int a = 10; 
    int *ptr = &a; //address of a store in pointer 
    //POINTER TO POINTER
    int **ptr2 = &ptr ; //address of pointer store in pointer
    cout << **ptr2 ; //10 
}