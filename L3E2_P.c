#include <stdio.h>
#include <stdlib.h>

// Function to calculate factorial
int fat(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to calculate combination
void comb(int n, int k) {
    if (k > n) {
        printf("Erro: k não pode ser maior que n.\n");
        return;
    }

    int fatN = fat(n);      // n!
    int fatK = fat(k);      // k!
    int fatNK = fat(n - k); // (n - k)!

    int combination = fatN / (fatK * fatNK);
    printf("Combinação de %d escolhe %d: %d\n", n, k, combination);
}

int main() {
    int n, k;

    // Input values for n and k
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de k: ");
    scanf("%d", &k);

    // Calculate and print the combination
    comb(n, k);

    return 0;
}