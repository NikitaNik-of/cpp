﻿// 03 Массивы C++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;

static string err = "\033[31m[ X ] \033[0m";
static string warn = "\033[33m[ ! ] \033[0m";
static string ok = "\033[32m[ OK ] \033[0m";

void n_13() {
    int n;
    float mini = 0;
    float maxi = 0;
    cout << "Input size of array | int >> ";
    cin >> n;

    float* a = new float[n];
    for (int i = 0; i < n; ++i) {
        cout << "Input array var #" << i + 1 << " >> ";
        cin >> a[i];
        if (a[i] > 0 && (mini == 0 || mini > a[i])) {
            mini = a[i];
        };
        if (a[i] < 0 && (maxi == 0 || maxi < a[i])) {
            maxi = a[i];
        };
    };
    cout << endl << "Max of - | " << maxi << endl << "Min of + | " << mini << endl;
}

void n_14() {
    int n, p; float ans = -1;

    cout << "Введите n | int >> ";
    cin >> n;
    cout << "Введите p | int+ >> ";
    cin >> p;
    float* vn = new float[n];

    for (int i = 0; i < n; ++i) {
        cout << "Введите координату вектора #" << i + 1 << " | float >> ";
        cin >> vn[i];
    }
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
        ans = powf(sum, 1.0/p);
    }
    else {
        cout << warn << "Некорректный ввод значения p!" << endl;
    }
    cout << ok << "Модуль вектора = " << ans << endl;
}

void n_15() {
    int n, search;
    cout << "Введите n | int >> ";
    cin >> n;
    float* a = new float[n];
    for (int i = 0; i < n; ++i) {
        cout << "Введите элемент #" << i + 1 << " | float >> ";
        cin >> a[i];
    }
    cout << "Введите search | float >> ";
    cin >> search;

    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == search)
        {
            flag = false;
            cout << ok << "Элемент найден под индексом: " << i << endl;
        }
    }
    if (flag) cout << warn << "Элемент не найден!" << endl;
}

void n_16() {
    int n;
    float mini = 0;
    float maxi = 0;
    cout << "Input size of array | int >> ";
    cin >> n;

    float* a = new float[n];
    for (int i = 0; i < n; ++i) {
        cout << "Input array var #" << i + 1 << " >> ";
        cin >> *(a+i);
        if (*(a+i) > 0 && (mini == 0 || mini > *(a+i))) {
            mini = *(a+i);
        };
        if (*(a+i) < 0 && (maxi == 0 || maxi < *(a+i))) {
            maxi = *(a+i);
        };
    };
    cout << endl << "Max of - | " << maxi << endl << "Min of + | " << mini << endl;
}

void n_17() {
    int n;
    cout << "Введите n | int >> ";
    cin >> n;
    float** a = new float*[n];
    for (int i = 0; i < n; ++i) {
        a[i] = new float[n];
        cout << "Введите элементы строки #" << i + 1 << " из " << n <<  " элементов | float /w spaces >> ";
        for (int j = 0; j < n; j++) cin >> a[i][j];
    }
    cout << endl << ok << "Транспонированная матрица:" << endl;

    for (int i = 0; i < n; i++) for (int j = 0; j < n - i; j++)
    {
        float t = a[i][j];
        a[i][j] = a[n - j - 1][n - i - 1];
        a[n - j - 1][n - i - 1] = t;
    }
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++)
    {
        (j < n - 1) ? cout << a[i][j] << "   " : cout << a[i][j] << "   " << endl;
    }
}


int main()
{
    setlocale(LC_ALL, "Russian");
    n_17();
}

