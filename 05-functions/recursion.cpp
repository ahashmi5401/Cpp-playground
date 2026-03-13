#include <iostream>
using namespace std;

// Recursion Example
// Adding two numbers together is easy to do, but adding a range of numbers is more complicated.
// In the following example, recursion is used to add a range of numbers together by breaking,
//  it down into the simple task of adding two numbers:

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

//example for factorial calculator 
int factorial(int z){
    if (z > 1){
        return z * factorial(z - 1);
    }else {
        return 1;
    }
}
main () {
    //ans i s 1+2+3+4 = 10
    int result = sum(4);
  cout <<" the sum od 0 to 4 =>  " << result << "\n";

  //example to calculate 9! by useing facorial function
  int resultEx = factorial(9);
  cout << "the value of 9 factorial is => " << resultEx  << "\n";
  return 0;
 }