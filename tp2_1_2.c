#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20
int main()
{
    srand(time(NULL));
    int i;
    double vt[N], *p, *pAux;
    p = vt;
    pAux = p;
    for (i = 0; i < N; i++)
    {
        *pAux = 1 + rand() % 100;
        printf(" %.2f ", *pAux);
        pAux++;
    }
    printf("\nCompruebo si se imprimio bien\n");
    for (i = 0; i < N; i++)
    {
        printf(" %.2f ", vt[i]);
    }
}