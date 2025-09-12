#include <iostream>
#include <string>

using namespace std;

string repeatCharacter(char, int); //prototype
long hourMinuteSecondToSeconds(int hour, int minute, int seconds);
void swapVariables(double& x, double& y) {
    double temp = x;
    x = y;
    y = temp;
}

int main() {
    cout << repeatCharacter('*', 8) << endl;
    cout << hourMinuteSecondToSeconds(4, 56, 17) << endl;

    double x = 10.0, y = 30.0;
    cout << x << ", " << y << endl;
    swapVariables(x, y);
    cout << x << ", " << y << endl;
    return 0;
}

string repeatCharacter(char character, int number) {
    string result;

    for (int i = 0; i < number; i++) {
        result += character;
    }
    return result;
}

long hourMinuteSecondToSeconds(int hour, int minute, int seconds) {
    long total_seconds = hour * 60 * 60 + minute * 60 + seconds;
    return total_seconds;
}