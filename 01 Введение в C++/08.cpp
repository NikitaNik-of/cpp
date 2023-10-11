#include <iostream>
#include <iomanip>
#include <afxres.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int n;

    cout << "Input n | int >> ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string line(10, '*');
        cout << endl << line << endl;
    }
    return 0;
}