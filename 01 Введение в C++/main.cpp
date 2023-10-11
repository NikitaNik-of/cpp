#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int n;
    float x;

    cout << "Input n | int >> ";
    cin >> n;
    cout << "Input x | double >> ";
    cin >> x;

    double an = -1.0;
    double sn = 0.0;
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            an = 1.0;
        }
        else {
            an = an * (-1.0 * x * x) / (2 * i) / (2 * i - 1);
        }
        sn = sn + an;
        cout << i << " | " << an << "   " << sn << endl;
    }
    cout << n << " | " << sn << " | " << cos(x) << endl;
}