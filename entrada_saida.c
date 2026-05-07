#include <stdio.h>

int main() {
    int idade = 25;
    float altura = 1.75;
    double saldobancario = 12345.67;
    char inicial = 'A';
    char nome[20];

    printf("iranilda: ");
    scanf("%s",nome);

    printf("\n---Dados ---\n");
    printf("Nome: %s\n" ,nome);
    printf("Idade: %d\n" ,idade);
    printf("Altura: %,2f\n" ,altura);
    printf("saldo: %.21f\n",saldobancario);
    printf("Inicial: %c\n", inicial); 

    return 0;
    }
