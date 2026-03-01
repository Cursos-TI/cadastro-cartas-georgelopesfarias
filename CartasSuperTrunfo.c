  #include <stdio.h>
#include <string.h>

int main() {

    // ===== CARTA 1 =====
    char nome1[50] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767.0;
    float pib1 = 1868.0; // em bilhões
    int pontos1 = 100;
    float densidade1 = populacao1 / area1;

    // ===== CARTA 2 =====
    char nome2[50] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 632.0; // em bilhões
    int pontos2 = 60;
    float densidade2 = populacao2 / area2;

    int opcao;

    printf("===== SUPER TRUNFO - NIVEL AVENTUREIRO =====\n");
    printf("Escolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n===== RESULTADO =====\n");

    switch(opcao) {

        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %d\n", nome1, populacao1);
            printf("%s: %d\n", nome2, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Area\n");
            printf("%s: %.2f\n", nome1, area1);
            printf("%s: %.2f\n", nome2, area2);

            if (area1 > area2) {
                printf("Vencedor: %s\n", nome1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", nome1, pib1);
            printf("%s: %.2f\n", nome2, pib2);

            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Numero de pontos turisticos\n");
            printf("%s: %d\n", nome1, pontos1);
            printf("%s: %d\n", nome2, pontos2);

            if (pontos1 > pontos2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pontos2 > pontos1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade demografica\n");
            printf("%s: %.4f\n", nome1, densidade1);
            printf("%s: %.4f\n", nome2, densidade2);

            // REGRA INVERTIDA
            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}