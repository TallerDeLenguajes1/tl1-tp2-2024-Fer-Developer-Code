#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 7
int main()
{
    srand(time(NULL));
    int i, j, *p;
    int mt[N][M];

    p = &mt[0][0];
    // Cargo matriz con punteros
    for (int i = 0; i < (N * M); i++)
    {
        *p = 1 + rand() % 100;
        // Muestro matriz con punteros
        printf("%5d", *p);
        if (((i + 1) % M) == 0)
        {
            printf("\n");
        }
        p++;
    }

    printf("\nConfirmo que este todo bien\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("%5d", mt[i][j]);
        }
        printf("\n");
    }
}