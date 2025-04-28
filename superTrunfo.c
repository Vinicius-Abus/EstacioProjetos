#include <stdio.h>
#include <string.h> // Para usar strcspn

int main() {
    // Primeira carta
    char estado1, codigo1[20], cidade1[50];
    unsigned long int populacao1;
    int pontos_turisticos1;
    float pib1, area1;
    float densidade_populacional_1;
    float PIB_percapita_1;
    float super_poder_1;

    printf("\n=== Registro da Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %c", &estado1); // O espaço antes do %c evita problemas com o buffer

    printf("Codigo da Carta: ");
    scanf("%s", codigo1);

    getchar(); // Limpa o buffer antes de ler a cidade
    printf("Nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; // Remove o '\n' se existir

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    densidade_populacional_1 = populacao1 / area1;
    PIB_percapita_1 = pib1 / populacao1;
    super_poder_1 = populacao1 + area1 + pib1 + pontos_turisticos1 + PIB_percapita_1 + (1 / densidade_populacional_1);

    // Segunda carta
    char estado2, codigo2[20], cidade2[50];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float pib2, area2;
    float densidade_populacional_2;
    float PIB_percapita_2;
    float super_poder_2;
    
    printf("\n=== Registro da Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta: ");
    scanf("%s", codigo2);

    getchar(); // Limpa o buffer antes de ler a cidade
    printf("Nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0'; // Remove o '\n' se existir

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade_populacional_2 = populacao2 / area2;
    PIB_percapita_2 = pib2 / populacao2;
    super_poder_2 = populacao2 + area2 + pib2 + pontos_turisticos2 + PIB_percapita_2 + (1 / densidade_populacional_2);
    
    // Exibindo os dados das cartas
    printf("\n===== CARTAS REGISTRADAS =====\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Área: %.2f km²\n", area1);
    printf("Numero de pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_1);
    printf("PIB per Capita: %.2f reais\n", PIB_percapita_1);
   
    printf("===============================================\n");

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Área: %.2f km²\n", area2);
    printf("Numero de pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_2);
    printf("PIB per Capita: %.2f reais\n", PIB_percapita_2);

    printf("===============================================\n");

    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_populacional_1 < densidade_populacional_2); // menor é melhor
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIB_percapita_1 > PIB_percapita_2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder_1 > super_poder_2);

    printf("===============================================\n");

    printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
    printf("Carta 2 - %s: %lu\n", cidade2, populacao2);

    if (populacao1 > populacao2){   
        printf("Carta 1 (%s) venceu\n",cidade1);
    }else{
        printf("Carta 2 (%s)venceu\n",cidade2);
    }
    

    return 0;
}
