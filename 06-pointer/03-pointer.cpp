//pointer with function

#include <iostream>
using namespace std;

void change(int *ptr){
    *ptr = 10;
}
main () {
    int a = 99;
    change(&a);
    cout << a;
}