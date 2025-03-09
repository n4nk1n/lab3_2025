#include <stdio.h>
#include <stdlib.h>

int SieveOfEratosthenes(int a);
int FlagMultipleNumbers();

int main()
{
    int numMax;
    printf("insira o valor max que quer avaliar por valores primos: ");
    scanf("%d", &numMax);
    SieveOfEratosthenes(numMax);
    FlagMultipleNumbers(numMax);
}

int SieveOfEratosthenes(int a)
{
    int trab[a];
    for (int i = a; i > 0; i--)
    {
        trab[i] = i;
    }
}
int FlagMultipleNumbers()
{
    //
}