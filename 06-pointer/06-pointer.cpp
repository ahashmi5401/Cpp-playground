//poniter with string 

#include <iostream>
#include <string>
using namespace std;





main() {
    //description
// char* name = "Ayan";
// ```
// - `"Ayan"` string memory mein store hota hai
// - har character alag alag address pe hota hai
// - `name` pointer pehle character `'A'` ka address store karta hai

// ---

// **Memory mein kuch aisa dikhta hai:**
// ```
// Address →  100   101   102   103   104
// Value   →  'A'   'y'   'a'   'n'   '\0'
//             ↑
        //    name points here
    const char *name = "Ayan"; //

     //name pointer hai 
    cout << name << "\n"; //cout full print  kart hai  , "Ayan"  ,'A' se shuru hota hai aur '\0' pe ruk jata hai

    cout << *name << "\n"; //1st pe A hai addrss mai tou wo ayega 
    cout << *(name + 1)  << "\n"; //2nd pe Y
    cout << *(name + 2) << "\n";  // address 102
    cout << *(name + 3) << "\n"; // address 103
    cout << *(name + 4) << "\n"; //= '\0'  address 104 — end
}