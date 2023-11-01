#include <stdio.h>
char cinput[] = "\x1B[94m";
char cok[] = "\x1B[92m";
char cinfo[] = "\x1B[90m";
char cclear[] = "\033[0m";

int conv10to8(int T){
    int E = 0;
    return E;
}

int main(){
    
    int t;

    int n;
    printf("Input size of array X | int >> ");
    scanf("%i", &n);

    int a[n];
    for (int i = 0; i < n; ++i){
        printf("Input array X var #%i >> ", i);
        scanf("%i", &t);
        a[i] = conv10to8(t);
    };
    
    int k;
    printf("Input size of array Y | int >> ");
    scanf("%i", &k);

    int Y[k];
    for (int i = 0; i < k; ++i){
        printf("Input array Y var #%i >> ", i);
        scanf("%i", &Y[k]);
    };
    
    int m;
    printf("Input size of array Z | int >> ");
    scanf("%i", &m);

    int Z[m];
    for (int i = 0; i < m; ++i){
        printf("Input array Z var #%i >> ", i);
        scanf("%i", &Z[i]);
    };
}