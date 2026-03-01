#include <stdio.h>
#include <string.h>

int main() {

    // ===== CARTA 1 =====
    char nome1[50] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767.0;
    float pib1 = 1868.0;
    int pontos1 = 100;
    float densidade1 = populacao1 / area1;

    // ===== CARTA 2 =====
    char nome2[50] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 632.0;
    int pontos2 = 60;
    float densidade2 = populacao2 / area2;

    int atributo1, atributo2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

    printf("===== SUPER TRUNFO - NIVEL MESTRE =====\n");

    // ===== MENU PRIMEIRO ATRIBUTO =====
    printf("\nEscolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);

    // ===== MENU SEGUNDO ATRIBUTO (dinâmico) =====
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");

    if (atributo1 != 1) printf("1 - Populacao\n");
    if (atributo1 != 2) printf("2 - Area\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turisticos\n");
    if (atributo1 != 5) printf("5 - Densidade Demografica\n");

    printf("Opcao: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("Erro: atributos nao podem ser iguais!\n");
        return 0;
    }

    // ===== CAPTURA VALORES ATRIBUTO 1 =====
    switch(atributo1) {
        case 1:
            valor1_c1 = populacao1;
            valor1_c2 = populacao2;
            break;
        case 2:
            valor1_c1 = area1;
            valor1_c2 = area2;
            break;
        case 3:
            valor1_c1 = pib1;
            valor1_c2 = pib2;
            break;
        case 4:
            valor1_c1 = pontos1;
            valor1_c2 = pontos2;
            break;
        case 5:
            valor1_c1 = densidade1;
            valor1_c2 = densidade2;
            break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // ===== CAPTURA VALORES ATRIBUTO 2 =====
    switch(atributo2) {
        case 1:
            valor2_c1 = populacao1;
            valor2_c2 = populacao2;
            break;
        case 2:
            valor2_c1 = area1;
            valor2_c2 = area2;
            break;
        case 3:
            valor2_c1 = pib1;
            valor2_c2 = pib2;
            break;
        case 4:
            valor2_c1 = pontos1;
            valor2_c2 = pontos2;
            break;
        case 5:
            valor2_c1 = densidade1;
            valor2_c2 = densidade2;
            break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // ===== AJUSTE REGRA DENSIDADE (menor vence) =====
    if (atributo1 == 5) {
        valor1_c1 = -valor1_c1;
        valor1_c2 = -valor1_c2;
    }

    if (atributo2 == 5) {
        valor2_c1 = -valor2_c1;
        valor2_c2 = -valor2_c2;
    }

    // ===== SOMA DOS ATRIBUTOS =====
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\n===== RESULTADO =====\n");
    printf("%s - Soma: %.2f\n", nome1, soma1);
    printf("%s - Soma: %.2f\n", nome2, soma2);

    // ===== OPERADOR TERNÁRIO =====
    printf("%s\n",
        (soma1 > soma2) ? nome1 :
        (soma2 > soma1) ? nome2 :
        "Empate!"
    );

    return 0;
}