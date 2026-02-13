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
    // Cadastro das Cartas (Dados de exemplo)
    Carta carta1 = {
      "Paraná", 
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
      "Florianópolis", 
      508826, 675.4, 
      80000000.0, 
      100
    };


    // --- Cálculos ---
    carta1.densidadePopulacional = (float)carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / (float)carta1.populacao;

    carta2.densidadePopulacional = (float)carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / (float)carta2.populacao;

    // --- Comparação ---
    // Atributo escolhido: População
    printf("### Comparação de Cartas ###\n");
    printf("Atributo: População\n\n");
    
    printf("Carta 1 (%s): %d\n", carta1.nomeCidade, carta1.populacao);
    printf("Carta 2 (%s): %d\n", carta2.nomeCidade, carta2.populacao);
    printf("---------------------------\n");

    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) VENCEU!\n", carta1.nomeCidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) VENCEU!\n", carta2.nomeCidade);
    } else {
        printf("Resultado: EMPATE!\n");
    }


    return 0;
}
