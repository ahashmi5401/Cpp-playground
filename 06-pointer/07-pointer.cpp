//Array of Pointers:

#include <iostream>
using namespace std;
main (){

    int a = 10 , b = 20 , c = 30;
    
    int * arr[3] = {&a , &b , &c};
    
    for(int i = 0 ; i< 3 ; i++){
        cout << i + 1 << "=>" << *arr[i] << "\n" ; //one by one print value of a , b , c
        cout << i + 1 << "=>" << arr[i] << "\n" ; //one by one it print address of a , b ,c 
}
}