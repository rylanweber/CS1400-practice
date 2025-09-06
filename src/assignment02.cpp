#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main () {
    int integer1;
    int integer2;
    int integer3;
    int integer4;
    int integer5;
    int total_valid = 0;
    int minimum = numeric_limits<int>::max();
    int maximum = 0;
    int total = 0;
    double average;

    do {
        int recieved_input;
        cout << "Enter a positive integer that is a multiple of 3: " << endl;
        cin >> recieved_input;
        if (recieved_input <= 0 || recieved_input % 3 != 0) {
            cout << "Invalid integer: not a positive or a multiple of 3." << endl;
        } else {
            total_valid += 1;
            if (total_valid == 1) {
                integer1 = recieved_input;
            } else if (total_valid == 2) {
                integer2 = recieved_input;
            } else if (total_valid == 3) {
                integer3 = recieved_input;
            } else if (total_valid == 4) {
                integer4 = recieved_input;
            } else if (total_valid == 5) {
                integer5 = recieved_input;
            }
            total += recieved_input;
            if (recieved_input > maximum) {
                maximum = recieved_input;
            } else if (recieved_input < minimum) {
                minimum = recieved_input;
            }
        }
    } while (total_valid < 5);

    average = (integer1 + integer2 + integer3 + integer4 + integer5) / 5.0;

    cout << "Count" << setw(12) << "Minimum" << setw(12) << "Maximum" << setw(12) << "Total" << setw(12) << "Average" << endl;
    cout << "=======================================================" << endl;
    cout << setw(5) << total_valid << setw(12) << minimum << setw(12) << maximum << setw(12) << total << setw(12) << average << endl;

    return 0;
}