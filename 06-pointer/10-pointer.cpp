// MASTER (Dynamic 2D Array):
#include <iostream>
using namespace std;

main()
{
    int rows = 3, cols = 3;
    int **matrix = new int *[rows];

    // abhi khali hai garbage tou inhe memory do
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[cols];
    }

    // assign values
    // 3 jaga value assign ki hai bus or baki jaga garbage value hai example it give any random no like
    // 8389291

    matrix[0][0] = 1;
    matrix[1][1] = 5;
    matrix[2][2] = 9;

    cout << **matrix; // hamesha pehle pe jake check karega ,  matrix[0][0] = 1; , output = 1
    // // print
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }
    // // free memory
    //JS mein garbage collector khud free karta hai — C++ mein tum khud free karo!
    // Step 1 — pehle har row free karo
    for (int i = 0; i < rows; i++)
        delete[] matrix[i]; // row 0, row 1, row 2 free

    // Step 2 — phir matrix khud free karo
    delete[] matrix;
}