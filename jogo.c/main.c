#include <stdio.h>
 int main() {


 //carta 1
 char pais1[50];
 int populacao1;
 float pib1;

 // carta 2
 char pais2[50];
 int populacao2;
 float pib2;

 //entrada de dados 2
    printf("=== Carta 2 ===\n");
    printf("Argentina: ");
    scanf("%s", pais2);

    printf(" 210000000: ");
    scanf("%d", &populacao2);

    printf("1800: ");
    scanf("%f", &pib2);



    // comparação da população
    printf("\nComparação de População:\n");

    if (populacao1 > populacao2) {
        printf("%s venceu %s.\n", pais1, pais2);
        
    } else if (populacao1 < populacao2) {
        printf("%s venceu %s.\n", pais2, pais1);
    } else if (populacao1 == populacao2) {
        printf("%s e %s empataram.\n", pais1, pais2);
    }


 
    /* code */
    return 0;
 }
 