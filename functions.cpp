#include <iostream>
using namespace std;

// function declaration
void greet(string name){
        cout << "Hello, " << name << ", welcome to C++ functions" << endl;
    }

void greet(){
        cout << "Hello, welcome to C++ functions" << endl;
    }


    
int main() {
    // function in cpp
    
    // void greet(); // function prototype
    greet(); // function call

    // function definition
    /*  

    void --> return type (void means no return value)
    greet --> function name
    () --> parameters (empty means no parameters)
    { } --> function body
    return types (void, int, float, char, etc.) must be specified

    */

    // function overloading
    greet("jisu"); // function call

    // the two functions have the same name but different parameters is called function overloading

    return 0;
}