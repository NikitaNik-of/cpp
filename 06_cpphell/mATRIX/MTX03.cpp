#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int SLAU(double matrica_a[3][3], int n, double *massiv_b, double *x)
{
    int i, j, k, r;
    double c, M, max, s;
    
    double **a, *b;
    
    a = (double **)calloc(n, sizeof(double *));
    for (i = 0; i < n; i++)
        a[i] = (double *)calloc(n, sizeof(double));
    b = (double *)calloc(n, sizeof(double));
    
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            a[i][j] = matrica_a[i][j];
    for (i = 0; i < n; i++)
        b[i] = massiv_b[i];
        
    for (k = 0; k < n; k++)
    {
        max = fabs(a[k][k]);
        r = k;
        for (i = k + 1; i < n; i++)
            if (fabs(a[i][k]) > max)
            {
                max = fabs(a[i][k]);
                r = i;
            }
            
        for (j = 0; j < n; j++)
        {
            c = a[k][j];
            a[k][j] = a[r][j];
            a[r][j] = c;
        }
        c = b[k];
        b[k] = b[r];
        b[r] = c;
        
        for (i = k + 1; i < n; i++)
        {
            for (M = a[i][k] / a[k][k], j = k; j < n; j++)
                a[i][j] -= M * a[k][j];
            b[i] -= M * b[k];
        }
    }
    if (a[n - 1][n - 1] == 0)
        if (b[n - 1] == 0)
            return -1; //inf
        else
            return -2; //empt
    else
    {
        for (i = n - 1; i >= 0; i--)
        {
            for (s = 0, j = i + 1; j < n; j++)
                s += a[i][j] * x[j];
            x[i] = (b[i] - s) / a[i][i];
        }
        return 0; // wicked
    }
}

int main()
{
    int i, j, N = 3;
    double *x;
    x=(double *)calloc(N,sizeof(double));
    double a[3][3] = {{0.34, 0.71, 0.63}, {0.71, -0.65, -0.18}, {1.17, -2.35, 0.75}};    
    double b[3] = {2.08, 0.17, 1.28};


    printf("\n\nИсходная матрица A\n");
    for (i = 0; i < N; printf("\n"), i++)
        for (j = 0; j < N; j++)
            printf("%5.1f \t", a[i][j]);
    printf("\n\nИсходный вектор b\n");
    for (i = 0; i < N; i++)
        printf("%5.1f \t", b[i]);
    
    int output = SLAU(a, 3, b, x);
    
    double s = 0.0;
    
    printf("\n\nПолученный вектор Х\n");
    for (i = 0; i < N; i++)
        printf("%5.3f \t", x[i]);
        s += (2.0*x[i] - 3.0)*(2.0*x[i] - 3.0);

    printf("\n\n|2Х - 3| = %5.3f\n", sqrtf(s));
    
}