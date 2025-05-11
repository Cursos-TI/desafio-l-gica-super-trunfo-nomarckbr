#include<stdio.h>

int main()
{
// Variáveis da carta 1
char estado1, codigo1[4], nomecidade1[30];
int pontoturistico1, populacao1, opcao;
float pib1, area1, divisao, divisao2, superpoder1, superpoder2;

// Variáveis da carta 2
char estado2, codigo2[4], nomecidade2[30];
int pontoturistico2, populacao2;
float pib2, area2, divis, divis2;

    // Entrada de dados da carta 1
    printf("\n--- CARTA 1 ---\n");
    printf("Insira o nome do País:\n");
    scanf("%s", &nomecidade1);
    printf("Insira a população: (ex: 9738484)\n");
    scanf("%d", &populacao1);
    printf("Insira a área em Km²: (ex: 7294.93)\n");
    scanf("%f", &area1);
    printf("Insira o Pib em bilhões: (ex: 7838.83)\n");
    scanf("%f", &pib1);
    printf("Insira os pontos turísticos:\n");
    scanf("%d", &pontoturistico1);
    
  
    // Entrada de dados da carta 2
    printf("\n--- CARTA 2 ---\n");
    printf("Insira o nome do País:\n");
    scanf("%s", &nomecidade2);
    printf("Insira a população: (ex: 9738484)\n");
    scanf("%d", &populacao2);
    printf("Insira a área em Km²: (ex: 7294.93)\n");
    scanf("%f", &area2);
    printf("Insira o Pib em bilhões: (ex: 7838.83)\n");
    scanf("%f", &pib2);
    printf("Insira os pontos turísticos:\n");
    scanf("%d", &pontoturistico2);
    
    ///Operadores de cálculos.///
    /// divisao e divis = Densidade populacional
    /// divisao2 e divis2 = PIB Percapita
    divisao2 = pib1 / populacao1;
    divis = populacao2 / area2;
    divisao = populacao1 / area1;
    divis2 = pib2 / populacao2;
    superpoder1 = populacao1 + area1 + pib1 + pontoturistico1 + divisao2, (1/divisao);
    superpoder2 = populacao2 + area2 + pib2 + pontoturistico2 + divis2, (1/divisao2);
    
    //Impressão das Cartas
    printf("\n--- CARTA 1 ---\n");
    printf("Nome do País: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f Km²\n", area1);
    printf("PIB: %f Bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontoturistico1);
    printf("Densidade Demográfica: %f Km²\n", divisao);
    
    printf("\n--- CARTA 2 ---\n");
    printf("Nome do País: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f Km²\n", area2);
    printf("PIB: %f Bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoturistico2);
    printf("Densidade Demográfica: %f Km²\n", divis);
    
    // Menu Interativo
    printf("\nEslcolha um atributo a ser comparado\n");
    printf("1. Comparar População \n");
    printf("2. Comparar Área \n");
    printf("3. Comparar PIB \n");
    printf("4. Comparar Pontos Turísticos \n");
    printf("5. Densidade Demográfica Km²\n");
    scanf("%d", &opcao);
    
    // Estrutura do Menu
    switch (opcao)
    {
    case 1:
    if (populacao1 > populacao2) {
    printf("\nCarta 1 - %s\n", nomecidade1);
    printf("Carta 2 - %s\n", nomecidade2);
    printf("Atributo: População \n");
    printf("%s: Valor Populacional %d\n", nomecidade1, populacao1);
    printf("%s: Valor Populacional %d\n", nomecidade2, populacao2);
    printf("A Carta: %s Venceu!\n", nomecidade1);
    } else if (populacao2 > populacao1){
    printf("\nCarta 1 - %s\n", nomecidade1);
    printf("Carta 2 - %s\n", nomecidade2);
    printf("Atributo: População \n");
    printf("%s: Valor Populacional %d\n", nomecidade1, populacao1);
    printf("%s: Valor Populacional %d\n", nomecidade2, populacao2);
    printf("A Carta: %s Venceu!\n", nomecidade2);
    }
    else {
    printf("\nCarta 1 - %s\n", nomecidade1);
    printf("Carta 2 - %s\n", nomecidade2);
    printf("Atributo: População \n");
    printf("%s: Valor Populacional %d\n", nomecidade1, populacao1);
    printf("%s: Valor Populacional %d\n", nomecidade2, populacao2);
    printf("Ouve um Empate!\n");
    }
    break;
    case 2:
    if (area1 > area2) {
    printf("\nCarta 1 - %s\n", nomecidade1);
    printf("Carta 2 - %s\n", nomecidade2);
    printf("Atributo: Área \n");
    printf("%s: Tamanho da Área %f\n", nomecidade1, area1);
    printf("%s: Tamanho da Área %f\n", nomecidade2, area2);
    printf("A Carta: %s Venceu!\n", nomecidade1);
    } else if (area2 > area1){
    printf("\nCarta 1 - %s\n", nomecidade1);
    printf("Carta 2 - %s\n", nomecidade2);
    printf("Atributo: Área \n");
    printf("%s: Tamanho da Área %f\n", nomecidade1, area1);
    printf("%s: Tamanho da Área %f\n", nomecidade2, area2);
    printf("A Carta: %s Venceu!\n", nomecidade2);
    }
    else {
    printf("\nCarta 1 - %s\n", nomecidade1);
    printf("Carta 2 - %s\n", nomecidade2);
    printf("Atributo: Área \n");
    printf("%s: Tamanho da Área %f\n", nomecidade1, area1);
    printf("%s: Tamanhobda Área %f\n", nomecidade2, area2);
    printf("Ouve um Empate!\n");
    }
    break;
    case 3:
    if (pib1 > pib2) {
    printf("\nCarta 1 - %s\n", nomecidade1);
    printf("Carta 2 - %s\n", nomecidade2);
    printf("Atributo: PIB \n");
    printf("%s: PIB %f\n", nomecidade1, pib1);
    printf("%s: PIB %f\n", nomecidade2, pib2);
    printf("A Carta: %s Venceu!\n", nomecidade1);
    } else if (area2 > area1){
    printf("\nCarta 1 - %s\n", nomecidade1);
    printf("Carta 2 - %s\n", nomecidade2);
    printf("Atributo: PIB \n");
    printf("%s: PIB %f\n", nomecidade1, pib1);
    printf("%s: PIB %f\n", nomecidade2, pib2);
    printf("A Carta: %s Venceu!\n", nomecidade2);
    }
    else {
    printf("\nCarta 1 - %s\n", nomecidade1);
    printf("Carta 2 - %s\n", nomecidade2);
    printf("Atributo: PIB \n");
    printf("%s: PIB %f\n", nomecidade1, pib1);
    printf("%s: PIB %f\n", nomecidade2, pib2);
    printf("Ouve um Empate!\n");
    }
    break;
    case 4:
    if (pontoturistico1 > pontoturistico2) {
    printf("\nCarta 1 - %s\n", nomecidade1);
    printf("Carta 2 - %s\n", nomecidade2);
    printf("Atributo: Pontos Turísticos \n");
    printf("%s: Pontos Turísticos %d\n", nomecidade1, pontoturistico1);
    printf("%s: Pontos Turísticos %d\n", nomecidade2, pontoturistico2);
    printf("A Carta: %s Venceu!\n", nomecidade1);
    } else if (pontoturistico2 > pontoturistico1){
    printf("\nCarta 1 - %s\n", nomecidade1);
    printf("Carta 2 - %s\n", nomecidade2);
    printf("Atributo: Pontos Turísticos \n");
    printf("%s: Pontos Turísticos %d\n", nomecidade1, pontoturistico1);
    printf("%s: Pontos Turísticos %d\n", nomecidade2, pontoturistico2);
    printf("A Carta: %s Venceu!\n", nomecidade2);
    }
    else {
    printf("\nCarta 1 - %s\n", nomecidade1);
    printf("Carta 2 - %s\n", nomecidade2);
    printf("Atributo: Pontos Turísticos \n");
    printf("%s: Pontos Turísticos %d\n", nomecidade1, pontoturistico1);
    printf("%s: Pontos Turísticos %d\n", nomecidade2, pontoturistico2);
    printf("Ouve um Empate!\n");
    }
    break;
    case 5:
     if (divisao < divis) {
    printf("\nCarta 1 - %s\n", nomecidade1);
    printf("Carta 2 - %s\n", nomecidade2);
    printf("Atributo: Densidade Demográfica \n");
    printf("%s: Densidade Demográfica %f\n", nomecidade1, divisao);
    printf("%s: Densidade Demográfica %f\n", nomecidade2, divis);
    printf("A Carta: %s Venceu!\n", nomecidade1);
    } else if (divisao > divis){
    printf("\nCarta 1 - %s\n", nomecidade1);
    printf("Carta 2 - %s\n", nomecidade2);
    printf("Atributo: Densidade Demográfica \n");
    printf("%s: Densidade Demográfica %f\n", nomecidade1, divisao);
    printf("%s: Densidade Demográfica %f\n", nomecidade2, divis);
    printf("A Carta: %s Venceu!\n", nomecidade2);
    }
    else {
    printf("\nCarta 1 - %s\n", nomecidade1);
    printf("Carta 2 - %s\n", nomecidade2);
    printf("Densidade Demográfica \n");
    printf("%s: Densidade Demográfica %f\n", nomecidade1, divisao);
    printf("%s: Densidade Demográfica %f\n", nomecidade2, divis);
    printf("Ouve um Empate!\n");
    }
    break;
    default:
    printf("Opção Inválida");
    }
    return 0;
 }