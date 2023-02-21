#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int h, m, s;
    cout << "Input time in s | int >> ";
    cin >> s ;
    m = (int)s / 60;
    s = s - m * 60;
    h = (int)m / 60;
    m = m - h * 60;

    cout << endl << "Time | " << setfill('0') << setw(2) << h << ":" << setw(2) << m << ":" << setw(2) << s << endl;
    return 0;
}
