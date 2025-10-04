#include <iostream>
using namespace std;

void reduceBalance (int *pointer, int withdraw) {
    *pointer = *pointer - withdraw;
};

int main() {
    int balance = 85;
    int *pointer = &balance;

    cout << balance << endl << pointer << endl;

    int w = 15;
    reduceBalance(pointer, w);
    cout << balance << endl;

    int *dbalance = new int;
    *dbalance = 100;

    cout << *dbalance << endl;
    cout << dbalance << endl;
    delete dbalance;
    return 0;
};