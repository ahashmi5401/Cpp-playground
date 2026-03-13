#include <iostream>
using namespace std;

int main() {

    // Integer Types
    int a = 100;
    short b = 32767;
    long c = 1000000;
    long long d = 9223372036854775807;
    unsigned int e = 4294967295;

    // Floating Point Types
    float f = 3.14f;
    double g = 3.141592653589793;
    long double h = 3.14159265358979323846L;

    // Character Types
    char i = 'A';
    wchar_t j = L'Z';

    // Boolean
    bool k = true;

    // void (no value — used in functions)

    cout << "============ INTEGER TYPES ============\n";
    cout << "int        => value: " << a << " | size: " << sizeof(a) << " bytes\n";
    cout << "short      => value: " << b << " | size: " << sizeof(b) << " bytes\n";
    cout << "long       => value: " << c << " | size: " << sizeof(c) << " bytes\n";
    cout << "long long  => value: " << d << " | size: " << sizeof(d) << " bytes\n";
    cout << "uint       => value: " << e << " | size: " << sizeof(e) << " bytes\n";

    cout << "\n========= FLOATING POINT TYPES =========\n";
    cout << "float      => value: " << f << " | size: " << sizeof(f) << " bytes\n";
    cout << "double     => value: " << g << " | size: " << sizeof(g) << " bytes\n";
    cout << "long double=> value: " << h << " | size: " << sizeof(h) << " bytes\n";

    cout << "\n=========== CHARACTER TYPES ===========\n";
    cout << "char       => value: " << i << " | size: " << sizeof(i) << " bytes\n";
    cout << "wchar_t    => value: " << j << " | size: " << sizeof(j) << " bytes\n";

    cout << "\n============== BOOLEAN ================\n";
    cout << "bool       => value: " << k << " | size: " << sizeof(k) << " byte\n";

    return 0;
}