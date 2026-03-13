#include <iostream>
using namespace std;

main()
{
    // Heap pe naya integer banaya value 50 ke sath
    int* heapPtr = new int(50);

     // Heap wali value print ki
    cout << "Heap Value: " << *heapPtr << "\n";

    // Heap ki memory free kar di #prevent from memory leak 
    delete heapPtr;

    //but pointer mai abhi bhi purana address store hai 
    // tou usse ,Pointer ko nullptr set kiya — dangling pointer se bachne ke liye
    heapPtr = nullptr;

    cout << heapPtr;  //0
}