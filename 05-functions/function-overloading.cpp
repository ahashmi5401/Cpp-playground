#include <iostream>
using namespace std;

//one example of function overloading 
int plusFunc(int a , int b){
    return a + b;
}
int plusFunc(double a , double b){
    return a + b;
}

//second example of Function Overloading by Number of Parameters
int addFunc(int a , int b){
    return a + b;
}
int addFunc(int a , int b , int c){
    return a + b + c;
}
main () {
    //function overloading is used  to prevent two functio of same logic  
    //example 1 result 
    double n1 = plusFunc(4.3, 5.4);
    int n2 = plusFunc(2,4);
    cout << n1 <<"\n";
    cout << n2 << "\n";



    //  EXAMPLE 2 RESULT 
    int result1 = addFunc(2 , 2);
    int result2 = addFunc(2,2,6);
    cout << result1 << "\n";
    cout << result2 << "\n";
}