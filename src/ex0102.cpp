#include <iostream>

using namespace std;

int main() {
    double fahrenheit, celcius;
    cout << "Enter temp in Celcius: " << endl;
    cin >> celcius;

    fahrenheit = 9.0 * celcius / 5.0 + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}