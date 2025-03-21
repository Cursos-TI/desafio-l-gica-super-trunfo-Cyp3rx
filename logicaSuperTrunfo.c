#include <stdio.h>

int main() {
    char estado1 ,estado2;
    char codigo1[5],codigo2[5];
    char nome1[50] ,nome2[50];
    unsigned long int populacao1 ,populacao2;
    float area1 ,area2;
    float pib1 ,pib2;
    int pontos1 ,pontos2;

    float densidade1, densidade2;
    float capta1, capta2;
    float inversodensidade1, inversodensidade2;

    float superPoder1, superPoder2;

    int escolhajogador;


    //estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    //Código da Carta: A letra do estado seguida de um número de 01 a 04
    //Nome: O nome da cidade
    //População: O número de habitantes da cidade
    //Área: A área (em km²) da cidade em quilômetros quadrados
    //PIB: O Produto Interno Bruto da cidade
    //Pontos: A quantidade de pontos turísticos na cidade

    printf("Bem Vindo ao Jogo SUPER TRUNFO \n");
    printf("\n");
    printf("Crie a Carta 1 \n");
    printf("\n");
    printf("Escreva uma letra de 'A' a 'H' representando umas das oitos cidades:  \n" );
    scanf(" %c", &estado1 );

    printf("Escreva a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf(" %s", codigo1);
    
    printf("Escreva o nome da cidade: \n");
    scanf(" %[^\n]", nome1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%ld%*c", &populacao1);

    printf("Digite a área (em km²) da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontos1);

    printf("Escreva o PIB: \n");
    scanf(" %f", &pib1);
    printf("\n");
    printf("\n");


    printf("Parabens Carta 1 criada agora vamos criar a Carta 2 \n");
    printf("\n");
    printf("Crie a Carta 2 \n");
    printf("\n");
    printf("Escreva uma letra de 'A' a 'H' representando umas das oitos cidades:  \n" );
    scanf(" %c", &estado2 );

    printf("Escreva a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigo2);

    printf("Escreva o nome da cidade: \n");
    scanf(" %[^\n]", nome2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%ld", &populacao2);

    printf("Digite a área (em km²) da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontos2);

    printf("Escreva o PIB: \n");
    scanf(" %f", &pib2);

    //calculando densidade e pib per capita

    densidade1 = (float)populacao1 / area1;

    densidade2 = (float)populacao2 / area2;

    inversodensidade1 = area1 / (float) populacao1; 

    inversodensidade2 = area2 / (float) populacao2;

    capta1 = (pib1 *1000000000) / (float)populacao1;

    capta2 = (pib2 *1000000000)/ (float)populacao2;

    //calculando super poder.

    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + capta1 + inversodensidade1;

    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + capta2 + inversodensidade2;

                                                                                                                                                                                                                           
    printf("Suas Cartas \n");
    printf("\n");
    printf("Carta 1: \n");
    printf("Estado: %c \n",estado1);
    printf("Código: %s \n",codigo1);
    printf("Nome da Cidade: %s \n" ,nome1);
    printf("População: %ld \n" ,populacao1);
    printf("Área: %.2f km² \n" ,area1);
    printf("PIB: %.2f Bilhões de reais \n" ,pib1);
    printf("Número de Pontos Turísticos: %d \n" ,pontos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capta: %.2f reais \n", capta1);
    printf("Super Poder: %.5f\n",superPoder1);

    printf("\n");
    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %c \n",estado2);
    printf("Código: %s \n",codigo2);
    printf("Nome da Cidade: %s \n" ,nome2);
    printf("População: %ld \n" ,populacao2);
    printf("Área: %.2f km² \n" ,area2);
    printf("PIB: %.2f Bilhões de reais \n" ,pib2);
    printf("Número de Pontos Turísticos: %d \n" ,pontos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capta: %.2f reais \n", capta2);
    printf("Super Poder: %.5f \n", superPoder2);
    printf("\n");
    printf("\n");

    //escolher a carta vencedora da comparação escolhi a população 


    printf("Escolha o atributo para comparação\n");
    
    printf("1. População\n");
   
    printf("2. Área\n");
   
    printf("3. PIB\n");
    
    printf("4. Número de pontos turísticos\n");

    printf("5. Densidade demográfica\n");
    
    printf("Escolha uma das opções: \n");
    scanf("%d", &escolhajogador);


    switch (escolhajogador){
    case 1:
        if(populacao1 > populacao2){
            printf("Carta 1 - %s (%c):%lu \n", nome1, codigo1, populacao1);
            printf("Carta 2 - %s (%c):%lu \n", nome2, estado2, populacao2);

            printf("Carta 1 %s Venceu!\n", nome1);
    }else if(populacao1 == populacao2){

        printf("O jogo empatou!");

    }else {
            printf("Carta 2 %s Venceu!\n", nome2);
    }
    break;

    case 2:
    if(area1 > area2){
        printf("Carta 1 - %s (%c):%lu \n", nome1, codigo1, area1);
        printf("Carta 2 - %s (%c):%lu \n", nome2, estado2, area2);

        printf("Carta 1 %s Venceu!\n", nome1);
    }else if(area1 == area2){

        printf("O jogo empatou!");
        
    }else {
        printf("Carta 2 %s Venceu!\n", nome2);
    }  
    break;

    case 3:
    if(pib1 > pib2){
        printf("Carta 1 - %s (%c):%lu \n", nome1, codigo1, pib1);
        printf("Carta 2 - %s (%c):%lu \n", nome2, estado2, pib2);

        printf("Carta 1 %s Venceu!\n", nome1);
    }else if(pib1 == pib2){

        printf("O jogo empatou!");
        
    }else {
        printf("Carta 2 %s Venceu!\n", nome2);
    }  
    break;

    case 4:
    if(pontos1 > pontos2){
        printf("Carta 1 - %s (%c):%lu \n", nome1, codigo1, pontos1);
        printf("Carta 2 - %s (%c):%lu \n", nome2, estado2, pontos2);

        printf("Carta 1 %s Venceu!\n", nome1);
    }else if(pontos1 == pontos2){

        printf("O jogo empatou!");
        
    }else {
        printf("Carta 2 %s Venceu!\n", nome2);
    }  
    break;

    case 5:
    if(densidade1 < densidade2){
        printf("Carta 1 - %s (%c):%lu \n", nome1, codigo1, densidade1);
        printf("Carta 2 - %s (%c):%lu \n", nome2, estado2, densidade2);

        printf("Carta 1 %s Venceu!\n", nome1);
    }else if(densidade1 == densidade2){

        printf("O jogo empatou!");
        
    }else {
        printf("Carta 2 %s Venceu!\n", nome2);
    }  
    break;


    default:

    printf("Opção invalida!");

    break;
    }




    return 0;
}