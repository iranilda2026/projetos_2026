#include <stdio.h>

int main() {
    int i = 1;  //variavel de incremento

    do {  //Entrada (1x pelo menos)

     printf("%d\n", i); //Saida

     i++; //incremento é necessário para evitar um loop infinito
     
    } while (i <= 10);  //condição 

    return 0;
}