#include <stdio.h>
#include <stdlib.h>
// DECLARAÇÃO DAS FUNÇÕES
int factorial(int n);
int formula(int n, int k);
 


int main()
{
    int m;
  
    printf("Digite o numero de linhas do triangulo de pascal vc quer: \n");
    // VERIFICAÇÃO
    while(1){
    if(scanf("%d", &m) == 1 && m > 0){
        break;
    }
    printf("Valor invalido, Digite um valor valido!\n");
    while(getchar() != '\n');
    }
    puts("triangulo de pascal: ");

 for(int i = 0; i < m; i++){

    int j = 0;
    while(j <= i){
    printf("%d\t", formula(i, j));
 j++;
    }

printf("\n");
 }
    return 0;
}



int formula(int n, int k){

    unsigned long long pascal; 
    pascal = factorial(n) / (factorial(k) * factorial(n-k));

    return pascal;
}


int factorial(int n){

unsigned long long resultado = 1; 

for(int i = 2; i <= n; i++){
    resultado *= i;
}
    return resultado;

}