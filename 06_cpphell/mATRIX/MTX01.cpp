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
    int i, j, N, **a, minInA_num, minInA_Ind1, minInA_Ind2, sumOfOdd, numberOfOdd;
    sumOfOdd = numberOfOdd = 0;
    // Ввод размерности матрицы
    printf("N=");
    scanf("%d", &N);
    // Создаём квадратную динамическую матрицу
    a = (int **)calloc(N, sizeof(int *));
    for (i = 0; i < N; i++)
        a[i] = (int *)calloc(N, sizeof(int));
    printf("Ввод элементов матрицы A\n");
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%i", &a[i][j]);

    printf("\n\nПолученная матрица A\n");
    for (i = 0; i < N; printf("\n"), i++)
        for (j = 0; j < N; j++)
            printf("%5.1i \t", a[i][j]);

    // Двойной цикл для поиска максимального, минимального
    // элементов и их индексов.
    for (minInA_num = a[0][0], minInA_Ind1 = minInA_Ind2 = i = 0; i < N; i++)
        for (j = 0; j < N; j++)
        {
            if (a[i][j] < minInA_num)
            {
                minInA_num = a[i][j];
                minInA_Ind1 = i;
                minInA_Ind2 = j;
            }
            if (a[i][j] % 2 == 1)
            {
                sumOfOdd += a[i][j];
                numberOfOdd += 1;
            }
        }

    float avrOfOdd = 1.0 * sumOfOdd / numberOfOdd;
    printf("\n\nСреднее по больнице: %f\tИндексы числа %i: [%i, %i]\t\n", avrOfOdd, minInA_num, minInA_Ind1, minInA_Ind2);

    float **B;
    B = productOfMatrixes(a, a, N, N, N);
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
        {
            B[i][j] = 0.2 * B[i][j];
        }
    printf("\n\nПолученная матрица B\n");
    for (i = 0; i < N; printf("\n"), i++)
        for (j = 0; j < N; j++)
            printf("%5.1f \t", B[i][j]);
}