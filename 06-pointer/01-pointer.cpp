//pointer 1 aesa variable hota hai jo dusre variable ke address ko store karta hai
#include <iostream>
using namespace std;

string food = "mango";

main (){
    string *foodAddress = &food;  //pointer 
    cout << "value  of food variable is => " << *foodAddress;   //it show value 
    cout << "Address of food variable is => " << foodAddress;   //it show address
    

}