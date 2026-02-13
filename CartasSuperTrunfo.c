#include <stdio.h>

typedef struct {
    char estado[50];
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

int main() {
    int opcao;

    // Cadastro das Cartas
    Carta carta1 = {
      "Parana", 
      "A01", 
      "Curitiba", 
      1996400, 
      435.5, 
      125000000.0, 
      35
    };
    Carta carta2 = {
      "Santa Catarina", 
      "B02", 
      "Florianopolis", 
      508826, 
      675.4, 
      80000000.0, 
      100
    };

    // --- Cálculos ---
    carta1.densidadePopulacional = (float)carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / (float)carta1.populacao;

    carta2.densidadePopulacional = (float)carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / (float)carta2.populacao;

    // --- Menu Interativo ---
    printf("Escolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n### Resultado da Comparacao ###\n");

    // --- Lógica de Comparação com Switch ---
    switch (opcao) {
        case 1: // População
            printf("Atributo: Populacao\n");
            printf("%s: %d\n", carta1.nomeCidade, carta1.populacao);
            printf("%s: %d\n", carta2.nomeCidade, carta2.populacao);
            
            if (carta1.populacao > carta2.populacao) printf("Vencedor: %s\n", carta1.nomeCidade);
            else if (carta2.populacao > carta1.populacao) printf("Vencedor: %s\n", carta2.nomeCidade);
            else printf("Empate!\n");
            break;

        case 2: // Área
            printf("Atributo: Area\n");
            printf("%s: %.2f\n", carta1.nomeCidade, carta1.area);
            printf("%s: %.2f\n", carta2.nomeCidade, carta2.area);
            
            if (carta1.area > carta2.area) printf("Vencedor: %s\n", carta1.nomeCidade);
            else if (carta2.area > carta1.area) printf("Vencedor: %s\n", carta2.nomeCidade);
            else printf("Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", carta1.nomeCidade, carta1.pib);
            printf("%s: %.2f\n", carta2.nomeCidade, carta2.pib);
            
            if (carta1.pib > carta2.pib) printf("Vencedor: %s\n", carta1.nomeCidade);
            else if (carta2.pib > carta1.pib) printf("Vencedor: %s\n", carta2.nomeCidade);
            else printf("Empate!\n");
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", carta1.nomeCidade, carta1.pontosTuristicos);
            printf("%s: %d\n", carta2.nomeCidade, carta2.pontosTuristicos);
            
            if (carta1.pontosTuristicos > carta2.pontosTuristicos) printf("Vencedor: %s\n", carta1.nomeCidade);
            else if (carta2.pontosTuristicos > carta1.pontosTuristicos) printf("Vencedor: %s\n", carta2.nomeCidade);
            else printf("Empate!\n");
            break;

        case 5: // Densidade Demográfica (Regra Inversa: Menor vence)
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f\n", carta1.nomeCidade, carta1.densidadePopulacional);
            printf("%s: %.2f\n", carta2.nomeCidade, carta2.densidadePopulacional);
            
            if (carta1.densidadePopulacional < carta2.densidadePopulacional) printf("Vencedor: %s\n", carta1.nomeCidade);
            else if (carta2.densidadePopulacional < carta1.densidadePopulacional) printf("Vencedor: %s\n", carta2.nomeCidade);
            else printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida! Reinicie o programa.\n");
            break;
    }
    printf("========================================\n");

    return 0;
}
