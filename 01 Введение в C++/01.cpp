#include <iostream>

using namespace std;

int main()
{
    // setlocale(LC_CTYPE, "Russian");
    float a, b;
    cout << "Input a | float >> ";
    cin >> a ;
    cout << "Input b | float >> ";
    cin >> b ;

    cout << endl << "a, b  | " << a << ", " << b << endl;
    cout << "a + b | " << a + b << endl;
    cout << "a - b | " << a - b << endl;
    cout << "a * b | " << a * b << endl;
    cout << "a / b | " << a / b << endl;
    return 0;
}
