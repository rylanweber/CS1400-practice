#include <iostream>
#include <string>

using namespace std;

struct Date {
    int year;
    string month;
    int day;
};

struct Point {
    int x, y;
};


void printDate(Date& d) {
    cout << "Date: " << d.month << " " << d.day << ", " << d.year << endl;
};

void printPoint(Point& p) {
    cout << "(" << p.x << ", " << p.y << ")" << endl;
};

int main() {
    Date dob {2000, "June", 21};
    Date wedding {2010, "July", 19};

    Point p, q, h;
    char trash;

    cout << "Enter point p: ";
    cin >> trash >> p.x >> trash >> p.y >> trash;

    cout << "Enter point q: ";
    cin >> trash >> q.x >> trash >> q.y >> trash;

    printDate(dob);
    printDate(wedding);

    printPoint(p);
    printPoint(q);

    h.x = (p.x + q.x) / 2;
    h.y = (p.y + q.y) / 2;
    printPoint(h);
    return 0;
};