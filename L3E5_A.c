#include <stdio.h>
#include <stdlib.h>

int *SieveOfEratosthenes(int a);

int main()
{
    int limit = 0;
    printf("limit?: ");

    if (scanf("%d", &limit) != 1 || limit < 0)
    {
        return 0; // Handle negative input
    }

    int *result = SieveOfEratosthenes(limit);

    if (result != NULL)
    {
        for (int i = 0; i <= limit; i++)
        {
            printf("%d ", result[i]);
            if (i % 10 == 0)
            {
                printf("\n");
            }
        }
        printf("\n");

        free(result); // Important: Deallocate the memory when done
    }
    else
    {
        printf("Memory allocation failed or invalid input.\n");
    }

    return 0;
}

int *SieveOfEratosthenes(int a)
{
    int *vetor = (int *)malloc((a + 1) * sizeof(int)); // Allocate memory for a+1 elements

    if (vetor == NULL)
    {
        // Handle memory allocation failure
        return NULL;
    }

    for (int i = 0; i <= a; i++)
    {
        vetor[i] = i;
    }

    return vetor; // Return the pointer to the array
}