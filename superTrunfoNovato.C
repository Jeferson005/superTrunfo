// Programa para cadastrar e exibir duas cartas do Super Trunfo

#include<stdio.h>
int main(){

    // Declaração das variáveis da Carta 1
        char estado1;
        char codigo1[4];
        char nomeCidade1[50];
        int populacao1;
        int pontosTuristicos1;
        float area1;
        float pib1;

    //Declaração das variáveis da Carta 2
        char estado2;
        char codigo2[4];
        char nomeCidade2[50];
        int populacao2;
        int pontosTuristicos2;
        float area2;
        float pib2;
     

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
        scanf("%d",&populacao1);

        printf("Digite a Area: \n");
        scanf("%f", &area1);

        printf("Digite o PIB: \n");
        scanf("%f", &pib1);

        printf("Digite o Numero de Pontos turisticos: \n");
        scanf("%d", &pontosTuristicos1);
        
       

        //Entrada de dados da carta 2
 
        printf("\n*********** Cadastro da CARTA 02 **************\nInforme o nome, estado e código diferente da Carta 1\n");

         printf("\nDigite o estado 2 (letra de A a H): \n");
        scanf(" %c", &estado2);

        printf("Digite o codigo da carta 2 (ex: A01):  \n");
        scanf("%s", codigo2);

        printf("Digite o nome da cidade 2: \n");
         scanf(" %[^\n]", nomeCidade2); // 

        printf("Digite a Populacao : \n");
        scanf("%d",&populacao2);

        printf("Digite a Area: \n");
        scanf("%f", &area2);

        printf("Digite o PIB: \n");
        scanf("%f", &pib2);

        printf("Digite o Numero de Pontos turisticos: \n");
        scanf("%d", &pontosTuristicos2);
        
        //Informa os Dados da Carta 1

        printf("\nCARTA 01\n");
        printf("Estado: %c \n", estado1);
        printf("Código: %s \n", codigo1);
        printf("Cidade: %s\n", nomeCidade1);
        printf("População : %d \n", populacao1);
        printf("Área: %.2f Km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n",  pib1);
        printf("Número de Pontos Turísticos: %d \n", pontosTuristicos1);
        
        //Informa os Dados da Carta 2

        printf("\n CARTA 2 \n");
        printf("Estado: %c \n",estado2);
        printf("Código: %s \n",codigo2);
        printf("Nome da cidade: %s\n",nomeCidade2);
        printf("População: %d \n",populacao2);
        printf("Área: %.2f Km²\n",area2);
        printf("PIB: %.2f bilhões de reais\n",pib2);
        printf("Número de Pontos Turísticos: %d \n",pontosTuristicos2);
            return 0;
}  
