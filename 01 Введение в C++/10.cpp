#include <iostream>
#include <iomanip>
#include <afxres.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int n;

    cout << "Input n | n > 0, int >> ";
    cin >> n;
    int fact = 1;
    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            fact = fact * i
        }
    }
    else cout << endl << "n! doesn't exist" << endl;
    return 0;
}
