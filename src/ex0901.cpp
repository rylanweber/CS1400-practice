#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

class Color {
    private:
        double r, g, b;

    public:
        Color() :  r(0.0), g(0.0), b(0.0) {};
        Color(double r, double g, double b) : r(r), g(g), b(b) {};

        string toRBG() const {
            stringstream sout;
            sout << "RGB(" << static_cast<int>(r * 255) << ", " << static_cast<int>(g * 255) << ", " << static_cast<int>(b * 255) << ")" << endl;

            return sout.str();
        };
        string toHEX() const { // #01AC03
            stringstream sout;
            sout << "#" << setfill('0') << hex << setw(2) << static_cast<int>(r * 255) << setw(2) << static_cast<int>(g * 255) << setw(2) << static_cast<int>(b * 255) << endl;

            return sout.str();
        };

        // overloaded operators

        friend ostream& operator<<(ostream& out, const Color& c) {
            out << c.toHEX();
            return out;
        };
        friend istream& operator>>(istream& in, Color& c) {
            in >> c.r >> c.g >> c.b;
            return in;
        };

        double operator[](int index) const {
            switch(index) {
                case 0: return r;
                case 1: return g;
                case 2: return b;
                default: return -1.0;
            }
        };
        double& operator[](int index) {
            switch(index) {
                case 0: return r;
                case 1: return g;
                case 2: return b;
                default: throw -1.0;
            }
        };
        bool operator==(const Color& c) {
            return r == c.r && g == c.g && b == c.b;
        };
};

int main() {
    Color c; // black
    Color c1(1.0, 0.25, 0.5);

    cout << c << endl; // << ( cout, c )
    cout << c1 << endl;

    cout << c.toRBG() << " --- " << c.toHEX() << endl;
    cout << c1.toRBG() << " --- " << c1.toHEX() << endl;

    Color c2;
    cout << "Enter a color (3 values between 0.0 and 1.0): ";
    cin >> c2;

    cout << "\n C1 red: " << c1[0] << endl;
    cout << "\n C green: " << c[1] << endl;
    cout << "\n C2 blue: " << c2[2] << endl;

    c2[1] = .6;

    if (c1 == c2) { // == ( c1, c2 )
        cout << "same colors" << endl;
    } else {
        cout << "different" << endl;
    }

    return 0;
}