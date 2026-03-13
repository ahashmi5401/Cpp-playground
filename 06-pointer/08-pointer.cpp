#include <iostream>
using namespace std;

int add(int a , int b){
    return a + b;
}
main (){
    //operation(10, 20) call hua
    // C++ bolta hai — "operation ke address pe jao"
    // us address pe add() function hai
    int (*ptrFunc)(int , int) = &add;
    cout << *ptrFunc << "\n";
    cout << ptrFunc(10,10);
}