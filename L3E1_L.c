#include <stdio.h>
#include <stdlib.h>

// Função que realiza a multiplicação
int conta(int a, int b)
{
    return a * b;
}

int main()
{
    int button = 1;
    int num1, num2, res;

    // Gerar dois números aleatórios entre 1 e 9
    num1 = 1 + (rand() % 9);
    num2 = 1 + (rand() % 9);

    while (1)
    {
        // Exibir a multiplicação para o aluno
        printf("Insira a Resposta da seguinte multiplicação: %d x %d =\t", num1, num2);

        // Verificação de entrada para a resposta
        while (1)
        {
            if (scanf("%d", &res) == 1 && res >= 0)
            {
                break;
            }
            printf("\nEntrada Inválida! Digite um valor válido.\n");
            while (getchar() != '\n')
                ;
        }

        // Se o aluno digitar 0, o programa deve sair
        if (res == 0)
        {
            break;
        }

        // Verificar se a resposta está correta
        if (conta(num1, num2) == res)
        {
            printf("\nAcerto, ah mizeravi!\n");
        }
        else
        {
            printf("\nErrou, trouxa!\n");
        }

        // Perguntar se o aluno deseja continuar
        printf("\nDeseja continuar? Se sim, pressione 1. Se não, pressione 0: ");

        // Verificação para a decisão de continuar ou não
        while (1)
        {
            if (scanf("%d", &button) == 1 && (button == 1 || button == 0))
            {
                break; // Se a entrada for válida, sai do loop
            }
            printf("\nEntrada Inválida! Digite um valor válido.\n");
            while (getchar() != '\n')
                ; // Limpar o buffer do teclado
        }

        // Se o aluno escolher continuar, gerar novos números
        if (button == 1)
        {
            num1 = 1 + (rand() % 9);
            num2 = 1 + (rand() % 9);
        }
        else
        {
            break; // Se o aluno escolher 0, sai do programa
        }
    }

    printf("\nObrigado por jogar! Até a próxima!\n");
    return 0;
}