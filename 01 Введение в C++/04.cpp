#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    float x;

    cout << "Input x | float >> ";
    cin >> x ;

    cout << endl << "f(x) | " << ((x < 0) ? (-1*(x*x) + 1) : (x + 1))<< endl;
    return 0;
}
