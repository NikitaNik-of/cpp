#include <stdio.h>
char cinput[] = "\x1B[94m";
char cok[] = "\x1B[92m";
char cinfo[] = "\x1B[90m";
char cclear[] = "\033[0m";

int main(){
    
    int n;
    printf("Input size of array | int >> ");
    scanf("%i", &n);

    int a[n];
    for (int i = 0; i < n; ++i){
        printf("Input array var #%i >> ", i);
        scanf("%i", &a[i]);
    };

    for (auto &&i : a) printf("%i ", i);
    printf("\n\n\n");

    int s = 0, flag = 1;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] > 0) && (a[i]%2==1))
        {
            s += a[i];
        }
        if ((a[i] == 0) && (flag)){
            printf("Found zero >> %i\n", i);
            flag = 0;
        }
    }
    printf("Sum of 2n+1>0 >> %i\n\n", s);
    

    int ar[n];
    int max = a[0];
    for (auto &&i : a)
        if (i > max) max = i;

    int maxIR = 0;

    for (int i = n - 1; i >= 0; i--){
        ar[i] = a[n - i - 1];
        if (ar[i] > ar[maxIR]) maxIR = i;
    }

    for (auto &&i : ar) printf("%i ", i);
    printf("\n\n\n");

    printf("%i\n", ar[maxIR]);
    printf("%i\n", max);
    printf("%i", a[n - maxIR - 1]);
    
    
    
}