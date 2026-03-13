// pointer to pointer
#include <iostream>
using namespace std;

string food = "mango";

main()
{
    string *ptr = &food; // address of food store in pointer  //
    string **ptr2 = &ptr; // Pointer to Pointer =>
                        // mango

    cout << ptr2 << "\n";   // address of ptr
    cout << *ptr2 << "\n";  // address of a
    cout << **ptr2 << "\n"; // value of a


//     **Simple analogy:**
// ```
// a     = house 🏠
// &a    = address of house 📍
// ptr   = paper with house address 📄
// &ptr  = address of that paper 📄📍
// ptr2  = paper with ptr's address 📄📄
// *ptr2 = go to ptr 📄
// **ptr2= go to ptr then go to a = 10 🏠
}
