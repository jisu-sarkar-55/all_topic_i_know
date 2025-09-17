#include <iostream>
using namespace std;

int main() {
    
    // conditional statement if else
    unsigned int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else if(age < 18 && age > 0) {
        cout << "You are not eligible to vote." << endl;
    } else {
        cout << "Invalid age entered." << endl;
    }

    // ternary operator
    string result = (age >= 18) ? "Eligible to vote." : "Not eligible to vote.";
    cout << result <<endl;

    //switch case
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;
    switch(day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day number." << endl;
    }

    return 0;
}