#include <iostream>
using namespace std;

int main() {
    // For loop example
    cout << "For loop from 1 to 5:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << " ";
    }

    cout << endl;
    //while loop example
    cout << "While loop from 1 to 5:" << endl;
    int j = 0;
    while (j<5)
    {
        cout << j + 1 << " ";
        j++;
    }
    
    cout << endl;
    //do-while loop example
    cout << "Do-while loop from 1 to 5:" << endl;
    int k = 0;
    do{
        cout << k + 1 << " ";
        k++;
    } while (k < 5);

    cout << endl;
    // nested loop example
    /* 
        for(){
            for(){
                // inner loop
            }
        }
    */

    return 0;
}