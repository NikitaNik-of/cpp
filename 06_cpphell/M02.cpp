#include <stdio.h>
#include <iostream>
using namespace std;
char cinput[] = "\x1B[94m";
char cok[] = "\x1B[92m";
char cinfo[] = "\x1B[90m";
char cclear[] = "\033[0m";


int conv10to8(int number){
    int octal = 0, i = 1;

    while (number != 0) {
        octal += (number % 8) * i;
        number /= 8;
        i *= 10;
    }

    return octal;
}
int ifDigUp (int n) {
    int previousDigit = 8;
    while (n > 0) {
        int currentDigit = n % 10;
        if (currentDigit >= previousDigit) {
            return 0;   
        }
        previousDigit = currentDigit;
        n /= 10;
    }
    return 1;
}

int main(){

    int n, t;
    printf("Input size of array X | int >> ");
    scanf("%i", &n);

    int X[n];
    for (int i = 0; i < n; ++i){
        printf("Input array X var #%i >> ", i);
        scanf("%i", &t);
        X[i] = conv10to8(t);
    };
    
    int k;
    printf("Input size of array Y | int >> ");
    scanf("%i", &k);

    int Y[k];
    for (int i = 0; i < k; ++i){
        printf("Input array Y var #%i >> ", i);
        scanf("%i", &t);
        Y[i] = conv10to8(t);
    };
    
    int m;
    printf("Input size of array Z | int >> ");
    scanf("%i", &m);

    int Z[m];
    for (int i = 0; i < m; ++i){
        printf("Input array Z var #%i >> ", i);
        scanf("%i", &t);
        Z[i] = conv10to8(t);
    };

    for (auto &&i : X) printf("%i ", i);
    printf("\n\n");

    for (auto &&i : Y) printf("%i ", i);
    printf("\n\n");

    for (auto &&i : Z) printf("%i ", i);
    printf("\n\n");

    int U[n + k + m];
    int c = 0;
    for (auto &&n : X)
    {
        if (ifDigUp(n) == 1){
            U[c] = n;
            c += 1;
        }
    }
    for (auto &&n : Y)
    {
        if (ifDigUp(n) == 1){
            U[c] = n;
            c += 1;
        }
    }
    for (auto &&n : Z)
    {
        if (ifDigUp(n) == 1){
            U[c] = n;
            c += 1;
        }
    }
    for (auto &&i : U) printf("%i ", i);
    printf("\n\n");

    int Umax[5] {0, 0, 0, 0, 0};
    for (int j = 0; j < c; j++)
    {
        if (Umax[0] < U[j]){
            for (int i = 4; i > 0; i--) Umax[i] = Umax[i-1];
            Umax[0] = U[j];
        }
        else if (Umax[1] < U[j]){
            for (int i = 4; i > 1; i--) Umax[i] = Umax[i-1];
            Umax[1] = U[j];
        }
        else if (Umax[2] < U[j]){
            for (int i = 4; i > 2; i--) Umax[i] = Umax[i-1];
            Umax[2] = U[j];
        }
        else if (Umax[3] < U[j]){
            Umax[4] = Umax[3];
            Umax[3] = U[j];
        }
        else if (Umax[4] < U[j]){
            Umax[4] = U[j];
        }
        
    }
    for (auto &&i : Umax) printf("%i ", i);
    
}