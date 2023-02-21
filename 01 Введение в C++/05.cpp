#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    float a, b, max;

    cout << "Input a | float >> ";
    cin >> a ;
    cout << "Input b | float >> ";
    cin >> b ;

    if (a > b){
        max = a;
    }
    else {
        max = b;
    }

    cout << endl << "max(a, b) | " << max << endl;
    return 0;
}
