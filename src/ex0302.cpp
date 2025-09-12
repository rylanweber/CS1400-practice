#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string findQuadrant(double degree) {
    double radians = 3.14 * degree / 180;

    if (sin(radians) >= 0 && cos(radians) >= 0) {
        return "Quadrant I";
    } else if (sin(radians) >= 0 && cos(radians) < 0) {
        return "Quadrant II";
    } else if (sin(radians) < 0 && cos(radians) < 0) {
        return "Quadrant III";
    } else {
        return "Quadrant VI";
    }
}

int main() {
    cout << findQuadrant(23) << endl;
    cout << findQuadrant(123) << endl;
    cout << findQuadrant(223) << endl;
    cout << findQuadrant(323) << endl;
    return 0;
}