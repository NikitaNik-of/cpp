#include <iostream>
#include <iomanip>
#include <afxres.h>

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
    cout << "Input operator | char of [/, *, -, + , ^] >> ";
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
            res = exp(b*log(a));
            break;
        default:
            cout << endl << "No correct operator provided!" << endl;
            break;

    }

    cout << endl << "Result | " << res << endl;

    return 0;
}
