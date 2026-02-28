#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  char estado1[2], cod_carta1[3], cidade1[50], estado2[2], cod_carta2[3], cidade2[50];
	int populacao1, pont_tur1, populacao2, pont_tur2;
	float area1, pib1, area2, pib2;

 // Leitura de dados carta 01
	printf("Estado: \n");
	scanf("%s", estado1);
	printf("Código da carta: \n");
	scanf("%s", cod_carta1);
	printf("Nome da cidade: \n");
	scanf("%s", cidade1);
	printf("População: \n");
	scanf("%i", &populacao1);
	printf("Área: \n");
	scanf("%f", &area1);
	printf("PIB: \n");
	scanf("%f", &pib1);
	printf("Pontos turísticos: \n");
	scanf("%i", &pont_tur1);

  // Leitura de dados carta 02
  printf("\nEstado: \n");
	scanf("%s", estado2);
	printf("Código da carta: \n");
	scanf("%s", cod_carta2);
	printf("Nome da cidade: \n");
	scanf("%s", cidade2);
	printf("População: \n");
	scanf("%i", &populacao2);
	printf("Área: \n");
	scanf("%f", &area2);
	printf("PIB: \n");
	scanf("%f", &pib2);
	printf("Pontos turísticos: \n");
	scanf("%i", &pont_tur2);

  // Exibição dados carta 01
  printf("\nCarta 1:\n");
	printf("Estado: %s\n", estado1);
	printf("Código: %s%s\n", estado1,cod_carta1);
	printf("Nome da cidade: %s\n", cidade1);
	printf("População: %i\n", populacao1);
	printf("Área: %.3f km²\n", area1);
	printf("PIB: R$%.2f\n", pib1);
	printf("Número de pontos turísticos: %i\n", pont_tur1);

  // Exibição dados carta 02
  printf("\nCarta 2:\n");
	printf("Estado: %s\n", estado2);
	printf("Código: %s%s\n", estado2,cod_carta2);
	printf("Nome da cidade: %s\n", cidade2);
	printf("População: %i\n", populacao2);
	printf("Área: %.3f km²\n", area2);
	printf("PIB: R$%.2f\n", pib2);
	printf("Número de pontos turísticos: %i\n", pont_tur2);

return 0;
} 
