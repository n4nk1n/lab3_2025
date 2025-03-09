#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int resp1 = 0; // aluno
    int jog = 0;   // jogadas
    int tent = 0;  // tentativas
    int pont = 0;  // pontos

    srand(time(NULL));

    printf("\n===========TABUADA===========\n");
    printf("(Para sair, digite 0)\n");

    while (1)
    {
        int p1 = rand() % 9 + 1; // evita 0 e 10
        int p2 = rand() % 9 + 1;
        int prod = p1 * p2;

        printf("Qual e o resultado de: %d vezes %d?\n", p1, p2);

        // int result = scanf("%d", &resp1); // resp adeq
        scanf("%d", &resp1);

        if (resp1 == 0)
        {
            printf("Saindo...\n");
            break;
        }

        /*
        if (result != 1) // seriedade
        {
            printf("besteira\n");
            while (getchar() != '\n') // limpeza
                ;
            continue;
        }
        */

        if (resp1 < 1 || resp1 > 81) // seriedade
        {
            printf("besteira\n");
            while (getchar() != '\n') // limpeza
                ;
            continue;
        }

        jog++;

        if (prod == resp1)
        {
            // pont++;
            printf("acertou\n");
            // printf("num de pont: %d\n", pont);
            // printf("num de jog: %d\n", jog);
            printf("=============================\n\n");
            continue;
        }
        else
        {
            tent++;
            printf("|^| incorreto. num de tent: %d\n", tent);
            printf("=============================\n\n");
        }

        // printf("num de jog: %d\n", jog);
    }

    return 0;
}