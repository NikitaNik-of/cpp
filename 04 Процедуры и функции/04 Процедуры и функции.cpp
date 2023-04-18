#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

static string err = "\033[31m[ X ] \033[0m";
static string warn = "\033[33m[ ! ] \033[0m";
static string ok = "\033[32m[ OK ] \033[0m";
static string in = "\033[94m[ IN ] \033[0m";

void color_test() {
    printf("\n");
    printf("\x1B[31mTexting\033[0m\t\t");
    printf("\x1B[32mTexting\033[0m\t\t");
    printf("\x1B[33mTexting\033[0m\t\t");
    printf("\x1B[34mTexting\033[0m\t\t");
    printf("\x1B[35mTexting\033[0m\n");
    printf("\x1B[36mTexting\033[0m\t\t");
    printf("\x1B[36mTexting\033[0m\t\t");
    printf("\x1B[36mTexting\033[0m\t\t");
    printf("\x1B[37mTexting\033[0m\t\t");
    printf("\x1B[93mTexting\033[0m\n");
    printf("\033[3;42;30mTexting\033[0m\t\t");
    printf("\033[3;43;30mTexting\033[0m\t\t");
    printf("\033[3;44;30mTexting\033[0m\t\t");
    printf("\033[3;104;30mTexting\033[0m\t\t");
    printf("\033[3;100;30mTexting\033[0m\n");
    printf("\033[3;47;35mTexting\033[0m\t\t");
    printf("\033[2;47;35mTexting\033[0m\t\t");
    printf("\033[1;47;35mTexting\033[0m\t\t");
    printf("\t\t");
    printf("\n");
}

void n_29(double x, double eps = 0.00001) {
    float epsn, proc;
    float an;
    int k = 1;
    float sn = 0;
    do
    {
        (k == 1) ? an = x : an = an * (-1 * x * x) / ((2*k - 1) * (2 * k - 2));
        sn += an;
        epsn = abs(an / sn);
        proc = floorf((eps / epsn) * 100.0);
        (proc > 100) ? proc = 100 : proc = proc ;
        cout << warn << "Идет подсчет: " << proc << "%   \r" << flush;
        // Sleep(200);
        k++;
    } while (epsn >= eps);
    cout << endl << ok << sn  << ", " << k - 1<< endl;
}

// 30
void n_29(double x, int n) {
    float proc;
    float an;
    int k = 1;
    float sn = 0;
    do
    {
        (k == 1) ? an = x : an = an * (-1 * x * x) / ((2 * k - 1) * (2 * k - 2));
        sn += an;
        proc = floorf((k * 100.0 / n * 1.0));
        (proc > 100) ? proc = 100 : proc = proc;
        cout << warn << "Идет подсчет: " << proc << "%   \r" << flush;
        // Sleep(200);
        k++;
    } while (k <= n);
    cout << endl << ok << sn << ", " << k - 1 << endl;
}

void n_31(int p, int vn[], int n) {
    float ans = -1;
    if (p == 0)
    {
        int maxi = -1;
        for (int i = 0; i < n; i++)
        {
            (vn[i] > maxi) ? maxi = abs(vn[i]) : maxi = maxi;
        }
        ans = maxi;
    }
    else if (p > 0)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += powf(abs(vn[i]), p);
        }
        ans = powf(sum, 1.0 / p);
    }
    else {
        cout << warn << "Некорректный ввод значения p!" << endl;
    }
    cout << ok << "Модуль вектора = " << ans << endl;
}

// void n_32(int vn[], int n, int search) {
//     bool flag = true;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == search)
//         {
//             flag = false;
//             cout << ok << "Элемент найден под индексом: " << i << endl;
//         }
//     }
//     if (flag) cout << warn << "Элемент не найден!" << endl;
// }

int main()
{
    setlocale(LC_ALL, "Russian");
    //color_test();

    //double x = 222.2;
    // cout << in << sin(x) << endl;
    // n_29(x); // 29
    
    // n_29(x, 5); //30
    // n_29(x, 0.1); //30

    int vn[5]{0, -1, 1, 2, 1};
    n_31(10, vn, 4);

    //int vn[4]{1, 3, 2, -1};
    //n_32(vn, 4, 1);
}