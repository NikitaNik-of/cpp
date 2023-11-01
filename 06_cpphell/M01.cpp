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
    printf("Sum of 2n+1>0 >> %i", s);
    
    
}