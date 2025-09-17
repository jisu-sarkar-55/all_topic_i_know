#include <iostream>
using namespace std;

int main()
{
    cout << "Data type and Opretors" << endl;

    // Data types in C++
    int a = 10;             // Integer data type
    float b = 30.4f;        // Floating-point data type
    double c = 4503.2;      // Double data type
    char d = 'A';           // Character data type
    bool isTrue = true;     // Boolean data type true or false
    string name = "Jisu";   // String data type
    const double PI = 3.14; // Constant variable (cannot be changed)

    // Print the values and their sizes
    cout << "Integer: " << a << ", Size: " << sizeof(a) << " bytes" << endl;           // 4 bytes
    cout << "Float: " << b << ", Size: " << sizeof(b) << " bytes" << endl;             // 4 bytes
    cout << "Double: " << c << ", Size: " << sizeof(c) << " bytes" << endl;            // 8 bytes
    cout << "Character: " << d << ", Size: " << sizeof(d) << " bytes" << endl;         // 1 byte
    cout << "Boolean: " << isTrue << ", Size: " << sizeof(isTrue) << " bytes" << endl; // 1 byte
    cout << "String: " << name << ", Size: " << sizeof(name) << " bytes" << endl;      // 32 bytes (varies)

    // Operators in C++
    int x = 5, y = 10;

    // Arithmetic Operators
    cout << "Addition: " << (x + y) << endl;       // Addition
    cout << "Subtraction: " << (y - x) << endl;    // Subtraction
    cout << "Multiplication: " << (x * y) << endl; // Multiplication
    cout << "Division: " << (y / x) << endl;       // Division
    cout << "Modulus: " << (y % x) << endl;        // Modulus

    // unary Operators
    cout << "Increment: " << (++x) << endl; // Increment
    cout << "Decrement: " << (--y) << endl; // Decrement

    // Relational Operators
    cout << "Equal to: " << (x == y) << endl;                 // Equal to
    cout << "Not equal to: " << (x != y) << endl;             // Not equal to
    cout << "Greater than: " << (x > y) << endl;              // Greater than
    cout << "Less than: " << (x < y) << endl;                 // Less than
    cout << "Greater than or equal to: " << (x >= y) << endl; // Greater than or equal to
    cout << "Less than or equal to: " << (x <= y) << endl;    // Less than or equal to

    // Logical Operators
    bool p = true, q = false;
    cout << "Logical AND: " << (p && q) << endl; // Logical AND
    cout << "Logical OR: " << (p || q) << endl;  // Logical OR
    cout << "Logical NOT: " << (!p) << endl;     // Logical NOT

    // Assignment Operators
    int z = 20; // Assignment operator
    z += 5;     // Addition assignment  z = z + 5
    z -= 3;     // Subtraction assignment z = z - 3
    z *= 2;     // Multiplication assignment z = z * 2
    z /= 4;     // Division assignment z = z / 4
    z %= 3;     // Modulus assignment z = z % 3
    // cout << "Final value of z: " << z << endl;

    return 0;
}