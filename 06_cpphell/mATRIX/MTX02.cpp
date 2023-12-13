#include <stdio.h>
#include <stdlib.h>

float **productOfMatrixes(int **A, int **B, int N, int M, int L)
{
    int i, j, k;
    float **result;
    result = (float **)calloc(N, sizeof(float *));
    for (i = 0; i < N; i++)
        result[i] = (float *)calloc(L, sizeof(float));
    for (i = 0; i < N; i++)
        for (j = 0; j < L; j++)
            for (result[i][j] = k = 0; k < M; k++)
                result[i][j] += A[i][k] * B[k][j];
    return result;
}


int main()
{
    int i, j, N, M;
    float  **a;
    
    printf("N=");
    scanf("%d", &N);
    printf("\tM=");
    scanf("%d", &M);
    
    a = (float **)calloc(M, sizeof(float *));
    for (i = 0; i < M; i++)
        a[i] = (float *)calloc(N, sizeof(float));
    printf("Ввод элементов матрицы A\n");
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            scanf("%f", &a[i][j]);

    printf("\n\nИсходная матрица A\n");
    for (i = 0; i < N; printf("\n"), i++)
        for (j = 0; j < N; j++)
            printf("%5.1f \t", a[i][j]);

    for (j = 0; j < M; j++){
        float sumOfPosit = 0;
        int minId = 0;
        float minInCol = a[j][0];
        for (i = 0; i < N; i++)
        {
            if (a[i][j] > 0) sumOfPosit += a[i][j];
            if (a[i][j] < minInCol)
            {
                minInCol = a[i][j];\
                minId = i;
            }
        }
        a[minId][j] = sumOfPosit;
    }

    printf("\n\nПолученная матрица A\n");
    for (i = 0; i < N; printf("\n"), i++)
        for (j = 0; j < N; j++)
            printf("%5.1f \t", a[i][j]);

    printf("\n#Строк с чередующимися знаками >> ");
    for (i = 0; i < N; i++)
    {
        int k = 1;
        for (j = 1; j < M; j++){
            if (a[i][j] * a[i][j-1] > 0) break;
            k++;
        }
        if (k == N) printf("%i\t", i);
    }
    
}