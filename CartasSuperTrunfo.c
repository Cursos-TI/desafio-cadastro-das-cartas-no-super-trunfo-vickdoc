#include <stdio.h>


int main() { 

    printf("SUPER TRUNFO \n");
    //defini as variaveis.
       int populacao;
       float PIB;
       float area;
       int pontos_turisticos;
    //leitura da populacao.
    printf("informe a população: \n ");
    scanf("%d", &populacao);
    //leitura do PIB.
    printf("informe o PIB: \n");
    scanf ("%f", &PIB);
    //leitura da area.
    printf("informe a area: \n");
    scanf("%f", &area);
    //leitura dos pontos turisticos.
    printf("informe pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);
    //informações preenchidas pelo usuario.
    printf("população: %d \n", populacao);
    printf("PIB: %f, \n", PIB);
    printf("area: %f, \n", area);
    printf("pontos turisticos: %d, \n", pontos_turisticos);


    return 0;
