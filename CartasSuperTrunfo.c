#include <stdio.h>

typedef struct
{
  int Populacao;
  float Area;
  float PIB;
  int Numero_de_Pontos_Turistico; 
  float Densidade_Populacional;
  float PIB_per_Capita;
  float Super_Poder; // Novo atributo
} Carta;

int main() {
  // Inicialização das Cartas
  Carta A01 = {
    1996400,
    435.5,
    12500.0, 
    35,
  };
  Carta B02 = {
    508826,
    675.4,
    8000.0,
    100,
  };

  // --- Cálculos para a Carta A01 ---
  A01.Densidade_Populacional = (float)A01.Populacao / A01.Area;
  A01.PIB_per_Capita = A01.PIB / (float)A01.Populacao;
  // Super Poder: Soma de tudo, mas usamos o inverso da densidade (1/densidade)
  A01.Super_Poder = (float)A01.Populacao + A01.Area + A01.PIB + 
                    (float)A01.Numero_de_Pontos_Turistico + A01.PIB_per_Capita + 
                    (1.0f / A01.Densidade_Populacional);

  // --- Cálculos para a Carta B02 ---
  B02.Densidade_Populacional = (float)B02.Populacao / B02.Area;
  B02.PIB_per_Capita = B02.PIB / (float)B02.Populacao;
  B02.Super_Poder = (float)B02.Populacao + B02.Area + B02.PIB + 
                    (float)B02.Numero_de_Pontos_Turistico + B02.PIB_per_Capita + 
                    (1.0f / B02.Densidade_Populacional);

  // Exibição das Cartas (Opcional, mas útil para conferir)
  printf("Carta 1 - Poder: %.2f | Carta 2 - Poder: %.2f\n\n", A01.Super_Poder, B02.Super_Poder);

  // --- COMPARAÇÃO E EXIBIÇÃO DOS RESULTADOS ---
  // Imprime 1 se Carta 1 vence, 0 se Carta 2 vence
  printf("Comparacao de Cartas (1 = Carta 1 vence, 0 = Carta 2 vence):\n");
  
  printf("Populacao: %d\n", A01.Populacao > B02.Populacao);
  printf("Area: %d\n", A01.Area > B02.Area);
  printf("PIB: %d\n", A01.PIB > B02.PIB);
  printf("Pontos Turisticos: %d\n", A01.Numero_de_Pontos_Turistico > B02.Numero_de_Pontos_Turistico);
  
  // Regra especial: Menor densidade vence
  printf("Densidade Populacional: %d\n", A01.Densidade_Populacional < B02.Densidade_Populacional);
  
  printf("PIB per Capita: %d\n", A01.PIB_per_Capita > B02.PIB_per_Capita);
  printf("Super Poder: %d\n", A01.Super_Poder > B02.Super_Poder);

  return 0;
}
