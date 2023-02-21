#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    long double a, b, res;
    char s;

    cout << "Input a, | float >> ";
    cin >> a ;
    cout << "Input b | float >> ";
    cin >> b ;
    cout << "Input operator | str of [/, *, -, + , ^] >> ";
    cin >> s ;

    switch (s){
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '*':
            res = a * b;
            break;
        case '/':
            res = a / b;
            break;
        case '^':
            res = powl(a, b);
            break;
        default:
            cout << endl << "No correct operator provided!" << endl;
            break;

    }

    cout << endl << "Result | " << res << endl;

    return 0;
}
