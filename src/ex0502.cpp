#include <iostream>
#include <string>

using namespace std;


int main() {
    int age;
    string fullName;

    cout << "Enter age: ";
    cin >> age;

    cin.ignore();

    cout << "Enter full name: ";
    getline(cin, fullName);

    cout << "Hello, " << fullName << "! You are " << age << " years old!" << endl;

    return 0;
};