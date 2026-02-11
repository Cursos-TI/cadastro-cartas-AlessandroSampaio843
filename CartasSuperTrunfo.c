#include <stdio.h>

typedef struct
{
  int Populacao;
  float Area;
  float PIB;
  int Numero_de_Pontos_Turistico; 
  float Densidade_Populacional;
  float PIB_per_Capita; // Corrigido de Capital para Capita
} Carta;

int main() {
  // Inicialização das Cartas
  Carta A01 = {
    1996400,
    435.5,
    12500.0,
    35};
  Carta B02 = {
    508826,
    675.4, 
    8000.0, 
    100};

  // --- Cálculos para a Carta A01 ---
  A01.Densidade_Populacional = (float)A01.Populacao / A01.Area;
  A01.PIB_per_Capita = A01.PIB / (float)A01.Populacao;

  // --- Cálculos para a Carta B02 ---
  B02.Densidade_Populacional = (float)B02.Populacao / B02.Area;
  B02.PIB_per_Capita = B02.PIB / (float)B02.Populacao;

  // Exibição da Carta 1
  printf("Carta 1:\n");
  printf("Populacao: %d\n" , A01.Populacao);
  printf("Area: %.2f km²\n" , A01.Area);
  printf("PIB: %.2f\n" , A01.PIB);
  printf("Pontos Turisticos: %d\n", A01.Numero_de_Pontos_Turistico);
  printf("Densidade Populacional: %.2f hab/km²\n", A01.Densidade_Populacional);
  printf("PIB per Capita: %.4f\n", A01.PIB_per_Capita);

  // Exibição da Carta 2
  printf("Carta 2:\n");
  printf("Populacao: %d\n" , B02.Populacao);
  printf("Area: %.2f km²\n" , B02.Area);
  printf("PIB: %.2f\n" , B02.PIB);
  printf("Pontos Turisticos: %d\n" , B02.Numero_de_Pontos_Turistico);
  printf("Densidade Populacional: %.2f hab/km²\n", B02.Densidade_Populacional);
  printf("PIB per Capita: %.4f\n", B02.PIB_per_Capita);

  return 0;
}
