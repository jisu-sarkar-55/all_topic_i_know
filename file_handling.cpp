#include <iostream>
#include <fstream>
using namespace std;

int main() {
    
    // open a file or create if it doesn't exist
    // fstream file;
    // file.open("student.txt");

    // // write to a file
    // file << "Hello, Sougoto Sarkar" << endl;

    // //close the file
    // file.close();

    //using harry bhai method
    // string st = "I am jisu";
    // fstream file("student.txt");  
    // file << st << endl;  // writing to the file
    // file.close();

    // read from a file
    string st2;
    fstream file("student.txt");
    // file >> st2;  // this will read only the first word
    getline(file, st2); // this will read the whole line
    file.close();
    cout << st2 << endl;

    return 0;
}