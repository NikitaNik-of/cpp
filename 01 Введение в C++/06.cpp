#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    float a, b, c, d;

    cout << "Input [a, | float >> ";
    cin >> a ;
    cout << "Input b] | float >> ";
    cin >> b ;
    cout << "Input [c, | float >> ";
    cin >> c ;
    cout << "Input d] | float >> ";
    cin >> d ;

    if ((a > b) || (c > d)) {
        cout << "Wrong input!";
    }
    else{
        if ((a < c) && (c <= b) && (b < d)) {
            cout << endl << "intersection([a, b], [c, d]) | " << "[ " << c << ", " << b << " ]" << endl;
        }
        else if ((c <= a) && (b <= d)) {
            cout << endl << "intersection([a, b], [c, d]) | " << "[ " << a << ", " << b << " ]" << endl;
        }
        else if ((a <= c) && (d <= b)) {
            cout << endl << "intersection([a, b], [c, d]) | " << "[ " << c << ", " << d << " ]" << endl;
        }
        else if ((c < a) && (a <= d) && (d < b)) {
            cout << endl << "intersection([a, b], [c, d]) | " << "[ " << a << ", " << d << " ]" << endl;
        }
        else {
            cout << endl << "intersection([a, b], [c, d]) | Empty" << endl;
        }
    }

    return 0;
}
