#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//inicialização das funções:

void intervalos(int a, float max[], float min[]);
void gerar(int b, float vect[]);

int main()
{
    srand(time(NULL));

    int n, k; 
    //                              - título -
        puts("Histograma de uma ocorrencia de n elementos aleatorios num intervalo com k divisoes: ");
    //                         receber inputs necessários 
        printf("Escreva os quantos elementos quer (n): ");
//                  verificação se n e k são valores aceitáveis:
// verificação n:
while(1){
    if(scanf("%d", &n) == 1 && n >= 1){
        break;
        }
        printf("\nValor de n invalido, porfavor digite um valor que seja valido(n > 0): ");
        while(getchar() != '\n');
    }

    printf("\nEscreva os valores de k (1 ate 10): ");

// verificação k:
    while(1){
        if(scanf("%d", &k) == 1 && k >= 1 && k <= 10){
            break;
            }
            printf("\nValor de k invalido, porfavor digite um valor que seja valido (1 ate 10): ");
            while(getchar() != '\n');
        }
puts("");
 float vect[n], max[k], min[k];
//          funções para fazer os intervalos e gerar os numeros: 
        intervalos(k, max, min);
        gerar(n, vect);
//          fazer o print da tabela:
    
for(int i = 0; i < k; i++){
    printf("[%0.2f, %0.2f)| ", min[i], max[i]);
    for(int j = 0; j < n; j++){
       if(vect[j] >= min[i] && vect[j] < max[i]){
        printf("*");
       }
    }
printf("\n");
}

    return 0;
}


void intervalos(int a, float max[], float min[]){

float largura = 1.0 / a;

for(int i = 0; i < a; i++){

max[i] = largura * (i + 1.0);
min[i] = largura * i; 

    }
}

void gerar(int b, float vect[]){

    for(int i = 0; i < b; i++){
        vect[i] = (float)rand() / RAND_MAX; // maximo sendo 1 e ainda gerando numeros com virgula flutuante
    }
}