// Lambda Functions
// A lambda function is a small, anonymous function you can write directly in your code.
//  It's useful when you need a quick function without naming it or declaring it separately.

// Syntax
// [capture] (parameters) { code };

#include <iostream>
#include <functional>
using namespace std;

// Passing Lambdas to Functions
// You can also pass a lambda function as an argument to another function.
// This is useful when you want to tell a function what to do, not just what data to use.
// In the example below, we send a small lambda function to another function, which then runs it twice:
// A function that takes another function as parameter

//function<void()>        // returns nothing, no args
//function<int()>         // returns int, no args
//function<int(int, int)> // returns int, takes 2 int args
//function<void(string)>  // returns nothing, takes a string
void myFunction(function<void()> func) {
  func();
}

int main () {

    //lambda
    auto message  = [] () {
        cout << "Muhammad Ayan Hashmi";
    };
    message();

    myFunction(message);
}