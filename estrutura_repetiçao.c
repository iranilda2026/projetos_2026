#include <stdio.h>

int main() {
    int i = 1;  //variavel de incremento

    while (i <= 10) {  //condição 

    printf("%d\n", i); //Saida
    i++; //incremento  é necessário para evitar um loop infinito
    }

    return 0;
}