
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
    scanf("%lu%*c", &populacao1);

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
    scanf("%lu", &populacao2);

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
    printf("População: %lu \n" ,populacao1);
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
    printf("População: %lu \n" ,populacao2);
    printf("Área: %.2f km² \n" ,area2);
    printf("PIB: %.2f Bilhões de reais \n" ,pib2);
    printf("Número de Pontos Turísticos: %d \n" ,pontos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB Per Capta: %.2f reais \n", capta2);
    printf("Super Poder: %.5f \n", superPoder2);
    printf("\n");
    printf("\n");


    

    int escolha_de_atributos1, escolha_de_atributos2;

    int resultado1, resultado2;

    //menu de comparação.

    printf("\n*** Comparação das Cartas ***\n");
    printf("Escolha Dois Atributos para Comparar\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB Per Capita\n");
    printf("7. Super Poder\n");

    printf("Escolha o primeiro Atributo: \n");
    scanf("%d", &escolha_de_atributos1);

    // Exibindo o menu novamente sem a opção já escolhida
   if(escolha_de_atributos1 == 1){
    printf("\nEscolha Dois Atributos para Comparar\n");
    printf("1. População(Ja selecionado)\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB Per Capita\n");
    printf("7. Super Poder\n");

    printf("Escolha o segundo Atributo: ");
    scanf("%d", &escolha_de_atributos2);
   } else if (escolha_de_atributos1 == 2){
    printf("Escolha Dois Atributos para Comparar\n");
    printf("1. População\n");
    printf("2. Área(Ja selecionado)\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB Per Capita\n");
    printf("7. Super Poder\n");

    printf("Escolha o segundo Atributo: ");
    scanf("%d", &escolha_de_atributos2);
   } else if (escolha_de_atributos1 == 3){
    printf("Escolha Dois Atributos para Comparar\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB(Ja selecionado)\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB Per Capita\n");
    printf("7. Super Poder\n");

    printf("Escolha o segundo Atributo: ");
    scanf("%d", &escolha_de_atributos2);
   } else if (escolha_de_atributos1 == 4){
    printf("Escolha Dois Atributos para Comparar\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos(Ja selecionado)\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB Per Capita\n");
    printf("7. Super Poder\n");

    printf("Escolha o segundo Atributo: ");
    scanf("%d", &escolha_de_atributos2);
   } else if(escolha_de_atributos1 == 5){
    printf("Escolha Dois Atributos para Comparar\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica (Ja selecionado)\n");
    printf("6. PIB Per Capita\n");
    printf("7. Super Poder\n");

    printf("Escolha o segundo Atributo: ");
    scanf("%d", &escolha_de_atributos2);
   } else if(escolha_de_atributos1 == 6){
    printf("Escolha Dois Atributos para Comparar\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB Per Capita(Ja selecionado)\n");
    printf("7. Super Poder\n");

    printf("Escolha o segundo Atributo: ");
    scanf("%d", &escolha_de_atributos2);
   }else if(escolha_de_atributos1 == 7){
    printf("Escolha Dois Atributos para Comparar\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB Per Capita\n");
    printf("7. Super Poder(Ja selecionado)\n");

    printf("Escolha o segundo Atributo: ");
    scanf("%d", &escolha_de_atributos2);
   }else {
    printf("opções invalidas");
   }

   



    if(escolha_de_atributos1 == escolha_de_atributos2){
        printf("\nNÃO ESCOLHA ATRIBUTOS IGUAIS !\n");
    }else switch (escolha_de_atributos1){
    case 1:
        printf("Voce escolheu o Atributo POPULAÇÃO.");
        printf("A população da carta 1 (%s) é de : %lu \n", nome1, populacao1);
        printf("A população da carta 2 (%s) é de : %lu \n", nome2, populacao2);

        if (populacao1 > populacao2){
            printf("Carta 1 (%s) teve uma população maior que a carta 2 (%s)\n", nome1, nome2);
        }else if (populacao1 == populacao2){ 
            printf("A carta 1 (%s) e a carta 2 (%s) possuem a mesma quantidade de habitantes.\n", nome1, nome2);
        }else {
            printf("Carta 2 (%s) teve uma população maior que a carta 1 (%s)\n", nome2, nome1);
        }
        
        
        break;

    case 2:
        printf("Voce escolheu o Atributo AREA.");
        printf("A area da carta 1 (%s) é de : %f \n", nome1, area1);
        printf("A area da carta 2 (%s) é de : %f \n", nome2, area2);

        if (area1 > area2){
            printf("Carta 1 (%s) teve uma area maior que a carta 2 (%s)\n", nome1, nome2);
        }else if (area1 == area2){ 
            printf("A carta 1 (%s) e a carta 2 (%s) possuem a mesma area.\n", nome1, nome2);
        }else {
            printf("Carta 2 (%s) teve uma area maior que a carta 1 (%s)\n", nome2, nome1);
        }    
        break;
        
    case 3:
        printf("Voce escolheu o Atributo PIB.");
        printf("A area da carta 1 (%s) é de : %f \n", nome1, pib1);
        printf("A area da carta 2 (%s) é de : %f \n", nome2, pib2);

        if (pib1 > pib2){
            printf("Carta 1 (%s) teve uma area maior que a carta 2 (%s)\n", nome1, nome2);
        }else if (pib1 == pib2){ 
            printf("A carta 1 (%s) e a carta 2 (%s) possuem a mesma area.\n", nome1, nome2);
        }else {
            printf("Carta 2 (%s) teve uma area maior que a carta 1 (%s)\n", nome2, nome1);
        }    
     break;        

    case 4:
       printf("Voce escolheu o Atributo PONTOS TURISTICOS.");
       printf("A quantidade de pontos Turistiscos da carta 1 (%s) é de : %d \n", nome1, pontos1);
       printf("A quantidade de pontos Turistiscos da carta 2 (%s) é de : %d \n", nome2, pontos2);
    
       if (pontos1 > pontos2){
           printf("Carta 1 (%s) teve mais pontos turisticos que a carta 2 (%s)\n", nome1, nome2);
       }else if (pontos1 == pontos2){ 
           printf("A carta 1 (%s) e a carta 2 (%s) possuem a mesma quantidade de Pontos Turistiscos.\n", nome1, nome2);
       }else {
           printf("Carta 2 (%s) teve mais pontos turisticos que a carta 1 (%s)\n", nome2, nome1);
       }
        break; 

    case 5:
       printf("Voce escolheu o Atributo DENSIDADE DEMORGRAFICA.");
       printf("A densidade da carta 1 (%s) é de : %f \n", nome1, densidade1);
       printf("A densidade da carta 2 (%s) é de : %f \n", nome2, densidade2);
     
       if (densidade2 > densidade1){
           printf("Carta 1 (%s) teve menor densidade que a carta 2 (%s)\n", nome1, nome2);
       }else if (densidade1 == densidade2){ 
           printf("A carta 1 (%s) e a carta 2 (%s) possuem a mesma densidade.\n", nome1, nome2);
       }else {
           printf("Carta 2 (%s) teve menor densiadade que a carta 1 (%s)\n", nome2, nome1);
       }
        break;

    case 6:
       printf("Voce escolheu o Atributo PIB PER CAPITA.");
       printf("O PIB Per Capita da carta 1 (%s) é de : %d \n", nome1, capta1);
       printf("O PIB Per Capita da carta 2 (%s) é de : %d \n", nome2, capta2);
    
       if (capta1 > capta2){
           printf("Carta 1 (%s) teve maior PIB Per Capita que a carta 2 (%s)\n", nome1, nome2);
       }else if (capta1 == capta2){ 
           printf("A carta 1 (%s) e a carta 2 (%s) possuem o mesmo PIB Per Capita.\n", nome1, nome2);
       }else {
           printf("Carta 2 (%s) teve maior PIB Per Capita que a carta 1 (%s)\n", nome2, nome1);
       }
        break;

    case 7:
       printf("Voce escolheu o Atributo PIB PER CAPITA.");
       printf("O PIB Per Capita da carta 1 (%s) é de : %d \n", nome1, capta1);
       printf("O PIB Per Capita da carta 2 (%s) é de : %d \n", nome2, capta2);
     
       if (superPoder1 > superPoder2){
           printf("Carta 1 (%s) teve maior PIB Per Capita que a carta 2 (%s)\n", nome1, nome2);
       }else if (superPoder1 == superPoder2){ 
           printf("A carta 1 (%s) e a carta 2 (%s) possuem o mesmo PIB Per Capita\n.", nome1, nome2);
       }else {
           printf("Carta 2 (%s) teve maior PIB Per Capita que a carta 1 (%s)\n", nome2, nome1);
       }
        break;


    default:

    printf("Opção Invalida !");
        break;
    }

    switch (escolha_de_atributos2){
        case 1:
            printf("Voce escolheu o Atributo POPULAÇÃO.");
            printf("A população da carta 1 (%s) é de : %lu \n", nome1, populacao1);
            printf("A população da carta 2 (%s) é de : %lu \n", nome2, populacao2);
    
            if (populacao1 > populacao2){
                printf("Carta 1 (%s) teve uma população maior que a carta 2 (%s)\n", nome1, nome2);
            }else if (populacao1 == populacao2){ 
                printf("A carta 1 (%s) e a carta 2 (%s) possuem a mesma quantidade de habitantes.\n", nome1, nome2);
            }else {
                printf("Carta 2 (%s) teve uma população maior que a carta 1 (%s)\n", nome2, nome1);
            }
            
            
            break;
    
        case 2:
            printf("Voce escolheu o Atributo AREA.");
            printf("A area da carta 1 (%s) é de : %f \n", nome1, area1);
            printf("A area da carta 2 (%s) é de : %f \n", nome2, area2);
    
            if (area1 > area2){
                printf("Carta 1 (%s) teve uma area maior que a carta 2 (%s)\n", nome1, nome2);
            }else if (area1 == area2){ 
                printf("A carta 1 (%s) e a carta 2 (%s) possuem a mesma area.\n", nome1, nome2);
            }else {
                printf("Carta 2 (%s) teve uma area maior que a carta 1 (%s)\n", nome2, nome1);
            }    
            break;
            
        case 3:
            printf("Voce escolheu o Atributo PIB.");
            printf("A area da carta 1 (%s) é de : %f \n", nome1, pib1);
            printf("A area da carta 2 (%s) é de : %f \n", nome2, pib2);
    
            if (pib1 > pib2){
                printf("Carta 1 (%s) teve uma area maior que a carta 2 (%s)\n", nome1, nome2);
            }else if (pib1 == pib2){ 
                printf("A carta 1 (%s) e a carta 2 (%s) possuem a mesma area.\n", nome1, nome2);
            }else {
                printf("Carta 2 (%s) teve uma area maior que a carta 1 (%s)\n", nome2, nome1);
            }    
         break;        
    
        case 4:
           printf("Voce escolheu o Atributo PONTOS TURISTICOS.");
           printf("A quantidade de pontos Turistiscos da carta 1 (%s) é de : %d \n", nome1, pontos1);
           printf("A quantidade de pontos Turistiscos da carta 2 (%s) é de : %d \n", nome2, pontos2);
        
           if (pontos1 > pontos2){
               printf("Carta 1 (%s) teve mais pontos turisticos que a carta 2 (%s)\n", nome1, nome2);
           }else if (pontos1 == pontos2){ 
               printf("A carta 1 (%s) e a carta 2 (%s) possuem a mesma quantidade de Pontos Turistiscos.\n", nome1, nome2);
           }else {
               printf("Carta 2 (%s) teve mais pontos turisticos que a carta 1 (%s)\n", nome2, nome1);
           }
            break; 
    
        case 5:
           printf("Voce escolheu o Atributo DENSIDADE DEMORGRAFICA.");
           printf("A densidade da carta 1 (%s) é de : %f \n", nome1, densidade1);
           printf("A densidade da carta 2 (%s) é de : %f \n", nome2, densidade2);
         
           if (densidade2 > densidade1){
               printf("Carta 1 (%s) teve menor densidade que a carta 2 (%s)\n", nome1, nome2);
           }else if (densidade1 == densidade2){ 
               printf("A carta 1 (%s) e a carta 2 (%s) possuem a mesma densidade.\n", nome1, nome2);
           }else {
               printf("Carta 2 (%s) teve menor densiadade que a carta 1 (%s)\n", nome2, nome1);
           }
            break;
    
        case 6:
           printf("Voce escolheu o Atributo PIB PER CAPITA.");
           printf("O PIB Per Capita da carta 1 (%s) é de : %d \n", nome1, capta1);
           printf("O PIB Per Capita da carta 2 (%s) é de : %d \n", nome2, capta2);
        
           if (capta1 > capta2){
               printf("Carta 1 (%s) teve maior PIB Per Capita que a carta 2 (%s)\n", nome1, nome2);
           }else if (capta1 == capta2){ 
               printf("A carta 1 (%s) e a carta 2 (%s) possuem o mesmo PIB Per Capita.\n", nome1, nome2);
           }else {
               printf("Carta 2 (%s) teve maior PIB Per Capita que a carta 1 (%s)\n", nome2, nome1);
           }
            break;
    
        case 7:
           printf("Voce escolheu o Atributo PIB PER CAPITA.");
           printf("O PIB Per Capita da carta 1 (%s) é de : %d \n", nome1, capta1);
           printf("O PIB Per Capita da carta 2 (%s) é de : %d \n", nome2, capta2);
         
           if (superPoder1 > superPoder2){
               printf("Carta 1 (%s) teve maior PIB Per Capita que a carta 2 (%s)\n", nome1, nome2);
           }else if (superPoder1 == superPoder2){ 
               printf("A carta 1 (%s) e a carta 2 (%s) possuem o mesmo PIB Per Capita.\n", nome1, nome2);
           }else {
               printf("Carta 2 (%s) teve maior PIB Per Capita que a carta 1 (%s)\n", nome2, nome1);
           }
            break;
        default:    
        printf("\nOpção Invalida !\n");
            break;
        }


       //somando as variaveis
       
    unsigned long int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7, resultado8, resultado9, resultado10, resultado11, resultado12, resultado13, resultado14, resultado15, resultado16, resultado17, resultado18, resultado19, resultado20, resultado21, resultado22, resultado23, resultado24;   

    if (escolha_de_atributos1 == 1 && escolha_de_atributos2 ==2){
        
        resultado1 = populacao1 + area1 ;
        resultado2 = populacao2 + area2 ;

        printf("\nA população de %s é %lu e a area %f.\n", nome1, populacao1, area1);
        printf("A soma dos dois atribuitos é: %lu \n",resultado1);


        printf("\nA população de %s é %lu e a area %f.\n", nome2, populacao2, area2);
        printf("A soma dos dois atribuitos é: %lu \n",resultado2);


        resultado1 > resultado2 ? printf("\nA cidade de %s venceu com a pontuação de: %lu \n", nome1,resultado1 ) : printf("\nA cidade de %s venceu com a pontuação de: %lu\n", nome2,resultado2 );




    } else if(escolha_de_atributos1 == 1 && escolha_de_atributos2 == 3){

        resultado3 = populacao1 + pib1;
        resultado4 = populacao2 + pib2;


        printf("\nA população de %s é %lu e o PIB %f.\n", nome1, populacao1, pib1);
        printf("A soma dos dois atribuitos é: %lu \n",resultado3);


        printf("\nA população de %s é %lu e o PIB %f.\n", nome2, populacao2, pib2);
        printf("A soma dos dois atribuitos é: %lu \n",resultado4);


        resultado3 > resultado4 ? printf("\nA cidade de %s venceu com a pontuação de: %lu\n", nome1,resultado3 ) : printf("A cidade de %s venceu com a pontuação de: %lu\n", nome2,resultado4 );
    
    }else if(escolha_de_atributos1 == 1 && escolha_de_atributos2 == 4){

        resultado5 = populacao1 + pontos1;
        resultado6 = populacao2 + pontos2;


        printf("\nA população de %s é %lu e os Pontos Turistiscos %f.\n", nome1, populacao1, pontos1);
        printf("A soma dos dois atribuitos é: %lu \n",resultado5);


        printf("\nA população de %s é %lu e os Pontos Turistiscos %f.\n", nome2, populacao2, pontos2);
        printf("A soma dos dois atribuitos é: %lu \n",resultado6);


        resultado5 > resultado6 ? printf("A cidade de %s venceu com a pontuação de: %lu\n", nome1,resultado5 ) : printf("A cidade de %s venceu com a pontuação de: %lu\n", nome2,resultado6 );
    
    }else if (escolha_de_atributos1 == 1 && escolha_de_atributos2 == 5){

        resultado7 = populacao1 + densidade1;
        resultado8 = populacao2 + densidade2;


        printf("\nA população de %s é %lu e a Densidade é de: %f.\n", nome1, populacao1, densidade1);
        printf("A soma dos dois atribuitos é: %lu \n",resultado7);


        printf("\nA população de %s é %lu e a Densidade é de: %f.\n", nome2, populacao2, densidade2);
        printf("A soma dos dois atribuitos é: %lu \n",resultado8);


        resultado7 < resultado8 ? printf("A cidade de %s venceu com a pontuação de: %lu\n", nome1,resultado7 ) : printf("A cidade de %s venceu com a pontuação de: %lu\n", nome2,resultado8 );
    
    }else if(escolha_de_atributos1 == 1 && escolha_de_atributos2 == 6){

        resultado9 = populacao1 + capta1;
        resultado10 = populacao2 + capta2;

        printf("\nA população de %s é %lu e o PIB per Capita é de: %f.\n", nome1, populacao1, capta1);
        printf("A soma dos dois atribuitos é: %lu \n",resultado9);


        printf("A população de %s é %lu e o PIB per Capita é de: %f.\n", nome2, populacao2, capta2);
        printf("A soma dos dois atribuitos é: %lu \n",resultado10);


        resultado9 > resultado10 ? printf("A cidade de %s venceu com a pontuação de: %lu\n", nome1,resultado9 ) : printf("A cidade de %s venceu com a pontuação de: %lu\n", nome2,resultado10 );
    

    }else if(escolha_de_atributos1 == 1 && escolha_de_atributos2 == 7){

        resultado11 = populacao1 + superPoder1;
        resultado12 = populacao2 + superPoder2;

        printf("\nA população de %s é %lu e o Super Poder é de: %f.\n", nome1, populacao1, superPoder1);
        printf("A soma dos dois atribuitos é: %lu \n",resultado9);


        printf("\nA população de %s é %lu e o Super Poder é de: %f.\n", nome2, populacao2, superPoder2);
        printf("A soma dos dois atribuitos é: %lu \n",resultado10);


        resultado11 > resultado12 ? printf("A cidade de %s venceu com a pontuação de: %lu\n", nome1,resultado11 ) : printf("A cidade de %s venceu com a pontuação de: %lu\n", nome2,resultado12 );
    
    }else if (escolha_de_atributos1 == 2 && escolha_de_atributos2 == 1){


        resultado13 = populacao1 + area1 ;
        resultado14 = populacao2 + area2 ;

        printf("\nA população de %s é %lu e a area %f.\n", nome1, populacao1, area1);
        printf("A soma dos dois atribuitos é: %lu \n",resultado13);


        printf("\nA população de %s é %lu e a area %f.\n", nome2, populacao2, area2);
        printf("A soma dos dois atribuitos é: %lu \n",resultado14);


        resultado1 > resultado2 ? printf("\nA cidade de %s venceu com a pontuação de: %lu \n", nome1,resultado13 ) : printf("\nA cidade de %s venceu com a pontuação de: %lu\n", nome2,resultado14 );





    }else if (escolha_de_atributos1 == 3 && escolha_de_atributos2 == 1){

        resultado15 = populacao1 + pib1;
        resultado16 = populacao2 + pib2;


        printf("\nA população de %s é %lu e o PIB %f.\n", nome1, populacao1, pib1);
        printf("A soma dos dois atribuitos é: %lu \n",resultado15);


        printf("\nA população de %s é %lu e o PIB %f.\n", nome2, populacao2, pib2);
        printf("A soma dos dois atribuitos é: %lu \n",resultado16);


        resultado15 > resultado16 ? printf("\nA cidade de %s venceu com a pontuação de: %lu\n", nome1,resultado15 ) : printf("A cidade de %s venceu com a pontuação de: %lu\n", nome2,resultado16 );
    




    }else if (escolha_de_atributos1 == 4 && escolha_de_atributos2 == 1){

        resultado17 = populacao1 + pontos1;
        resultado18 = populacao2 + pontos2;


        printf("\nA população de %s é %lu e os Pontos Turistiscos %f.\n", nome1, populacao1, pontos1);
        printf("A soma dos dois atribuitos é: %lu \n",resultado17);


        printf("\nA população de %s é %lu e os Pontos Turistiscos %f.\n", nome2, populacao2, pontos2);
        printf("A soma dos dois atribuitos é: %lu \n",resultado18);


        resultado17 > resultado18 ? printf("A cidade de %s venceu com a pontuação de: %lu\n", nome1,resultado17 ) : printf("A cidade de %s venceu com a pontuação de: %lu\n", nome2,resultado18 );
    



    }else if (escolha_de_atributos1 == 5 && escolha_de_atributos2 == 1){



        resultado19 = populacao1 + densidade1;
        resultado20 = populacao2 + densidade2;


        printf("\nA população de %s é %lu e a Densidade é de: %f.\n", nome1, populacao1, densidade1);
        printf("A soma dos dois atribuitos é: %lu \n",resultado19);


        printf("\nA população de %s é %lu e a Densidade é de: %f.\n", nome2, populacao2, densidade2);
        printf("A soma dos dois atribuitos é: %lu \n",resultado20);


        resultado19 < resultado20 ? printf("A cidade de %s venceu com a pontuação de: %lu\n", nome1,resultado19 ) : printf("A cidade de %s venceu com a pontuação de: %lu\n", nome2,resultado20 );
    

    }else if (escolha_de_atributos1 == 6 && escolha_de_atributos2 == 1){


        resultado21 = populacao1 + capta1;
        resultado22 = populacao2 + capta2;

        printf("\nA população de %s é %lu e o PIB per Capita é de: %f.\n", nome1, populacao1, capta1);
        printf("A soma dos dois atribuitos é: %lu \n",resultado21);


        printf("\n\nA população de %s é %lu e o PIB per Capita é de: %f.\n", nome2, populacao2, capta2);
        printf("A soma dos dois atribuitos é: %lu \n",resultado22);


        resultado21 > resultado22 ? printf("A cidade de %s venceu com a pontuação de: %lu\n", nome1,resultado21 ) : printf("A cidade de %s venceu com a pontuação de: %lu\n", nome2,resultado22 );
    


    }else if (escolha_de_atributos1 == 7 && escolha_de_atributos2 == 1){


        resultado23 = populacao1 + superPoder1;
        resultado24 = populacao2 + superPoder2;

        printf("\nA população de %s é %lu e o Super Poder é de: %f.\n", nome1, populacao1, superPoder1);
        printf("A soma dos dois atribuitos é: %lu \n",resultado23);


        printf("\nA população de %s é %lu e o Super Poder é de: %f.\n", nome2, populacao2, superPoder2);
        printf("A soma dos dois atribuitos é: %lu \n",resultado24);


        resultado23 > resultado24 ? printf("A cidade de %s venceu com a pontuação de: %lu\n", nome1,resultado23 ) : printf("A cidade de %s venceu com a pontuação de: %lu\n", nome2,resultado24 );
    
    }



    return 0;
}