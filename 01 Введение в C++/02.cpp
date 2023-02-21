#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int h, m, s;
    cout << "Input Время in h | int >> ";
    cin >> h ;
    cout << "Input time in m | int >> ";
    cin >> m ;
    cout << "Input time in s | int >> ";
    cin >> s ;

    cout << endl << "total seconds | " << h * 3600 + m * 60 + s << endl;
    return 0;
}
