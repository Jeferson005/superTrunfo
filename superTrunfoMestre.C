// Programa para cadastrar e exibir duas cartas do Super Trunfo

#include<stdio.h>
int main(){

    // Declaração das variáveis da Carta 1
        char estado1;
        char codigo1[4];
        char nomeCidade1[50];
        unsigned long int populacao1;
        int pontosTuristicos1;
        float area1;
        float pib1;
        float densidadePopulacional1;
        float pibPerCapita1;
        float superPoder1;

    //Declaração das variáveis da Carta 2
        char estado2;
        char codigo2[4];
        char nomeCidade2[50];
        unsigned long int populacao2;
        int pontosTuristicos2;
        float area2;
        float pib2;
        float densidadePopulacional2;
        float pibPerCapita2;
        float superPoder2;

        printf("BEM VINDO AO SUPER TRUNFO \n");

    // Entrada de dados da Carta 1
        printf("\nCadastro da CARTA 01 \n");

        printf("\nDigite o estado (letra de A a H): \n");
        scanf(" %c", &estado1);

        printf("Digite o codigo da carta (ex: A01): \n");
        scanf("%s", codigo1);

        printf("Digite o nome da cidade: \n");
        scanf(" %[^\n]", nomeCidade1); //permite cidades com espaços ex: "São Paulo"

        printf("Digite a Populacao: \n");
        scanf("%lu",&populacao1);

        printf("Digite a Area: \n");
        scanf("%f", &area1);

        printf("Digite o PIB: \n");
        scanf("%f", &pib1);

        printf("Digite o Numero de Pontos turisticos: \n");
        scanf("%d", &pontosTuristicos1);
        
        //Entrada de dados da carta 2
 
        printf("\n*********** Cadastro da CARTA 02 **************\nInforme a cidade, o estado e  o código diferente da Carta 1\n");

         printf("\nDigite o estado 2 (letra de A a H): \n");
        scanf(" %c", &estado2);

        printf("Digite o codigo da carta 2 (ex: A01):  \n");
        scanf("%s", codigo2);

        printf("Digite o nome da cidade 2: \n");
         scanf(" %[^\n]", nomeCidade2); // 

        printf("Digite a Populacao : \n");
        scanf("%lu",&populacao2);

        printf("Digite a Area: \n");
        scanf("%f", &area2);

        printf("Digite o PIB: \n");
        scanf("%f", &pib2);

        printf("Digite o Numero de Pontos turisticos: \n");
        scanf("%d", &pontosTuristicos2);

        densidadePopulacional1 = populacao1 / area1; //Calcula a densidade populacional dividindo a população  pela área  (habitantes por km²)
        pibPerCapita1 = pib1 / populacao1 ; // Calcula o PIB per capita dividindo o PIB total pela população
        superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1); //soma dos valores para saber o valor do super poder

        densidadePopulacional2 = populacao2 / area2 ; // Realiza o mesmo procedimento da densidade populacional, porém para a carta 2 
        pibPerCapita2 = pib2 / populacao2 ; // Realiza o mesmo procedimento do PIB per capita, porém para a carta 2 
        superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);
        
        //Informa os Dados da Carta 1
        printf("\nCARTA 01\n");
        printf("Estado: %c \n", estado1);
        printf("Código: %s \n", codigo1);
        printf("Cidade: %s\n", nomeCidade1);
        printf("População : %lu \n", populacao1);
        printf("Área: %.2f Km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n",  pib1);
        printf("Número de Pontos Turísticos: %d \n", pontosTuristicos1);
        printf("Densidade Populacional: %.2f hab/km\n", densidadePopulacional1);
        printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

        //Informa os Dados da Carta 2
        printf("\n CARTA 2 \n");
        printf("Estado: %c \n",estado2);
        printf("Código: %s \n",codigo2);
        printf("Nome da cidade: %s\n",nomeCidade2);
        printf("População: %lu \n",populacao2);
        printf("Área: %.2f Km²\n",area2);
        printf("PIB: %.2f bilhões de reais\n",pib2);
        printf("Número de Pontos Turísticos: %d \n",pontosTuristicos2);
        printf("Densidade Populacional: %.2f hab/km\n", densidadePopulacional2);
        printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

        printf("\n******* COMPARAÇÃO DE CARTAS *******\n");

        // Condição para realizara comparação das cartas
    if (populacao1 > populacao2)
        printf("População: Carta 1 venceu – (1)\n");
    else
        printf("População: Carta 2 venceu – (0)\n");

    if (area1 > area2)
        printf("Área: Carta 1 venceu – (1)\n");
    else
        printf("Área: Carta 2 venceu – (0)\n");

    if (pib1 > pib2)
        printf("PIB: Carta 1 venceu – (1)\n");
    else
        printf("PIB: Carta 2 venceu – (0)\n");

    if (pontosTuristicos1 > pontosTuristicos2)
        printf("Pontos Turísticos: Carta 1 venceu – (1)\n");
    else
        printf("Pontos Turísticos: Carta 2 venceu – (0)\n");

    if (densidadePopulacional1 < densidadePopulacional2)  // menor vence
        printf("Densidade Populacional: Carta 1 venceu – (1)\n");
    else
        printf("Densidade Populacional: Carta 2 venceu – (0)\n");

    if (pibPerCapita1 > pibPerCapita2)
        printf("PIB per Capita: Carta 1 venceu – (1)\n");
    else
        printf("PIB per Capita: Carta 2 venceu – (0)\n");

    if (superPoder1 > superPoder2)
        printf("Super Poder: Carta 1 venceu – (1)\n");
    else
        printf("Super Poder: Carta 2 venceu – (0)\n");

    return 0;
} 
