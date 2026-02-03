#include <stdio.h>

typedef struct
{
  int Populacao;
  float Area;
  float PIB;
  int Numero_de_Pontos_Turistico; 
  
} Carta;

int main() {
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


  printf("Carta 1:\n");
  printf("Populacao: %d\n" , A01.Populacao);
  printf("Area: %.2f\n" , A01.Area);
  printf("PIB: %.2f\n" , A01.PIB);
  printf("numero de Pontos Turistico: %d\n", A01.Numero_de_Pontos_Turistico);

  printf("carta 2:\n");
  printf("Populacao: %d\n" , B02.Populacao);
  printf("Area: %.2f\n" , B02.Area);
  printf("PIB: %.2f\n" , B02.PIB);
  printf("Numero de Pontos Turistico: %d\n" , B02.Numero_de_Pontos_Turistico)
return 0;
} 
