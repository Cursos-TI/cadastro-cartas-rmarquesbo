#include <stdio.h>
#include <locale.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
char estado[2], cod_carta[3], cidade[50];
int populacao, pont_tur, num_carta = 1;
float area, pib, pib_pc, densidade_pop;
	
void leitura(){
	printf("Estado: \n");
	scanf("%s", estado);
	printf("Código da carta: \n");
	scanf("%s", cod_carta);
	printf("Nome da cidade: \n");
	scanf("%s", cidade);
	printf("População: \n");
	scanf("%i", &populacao);
	printf("Área: \n");
	scanf("%f", &area);
	printf("PIB: \n");
	scanf("%f", &pib);
	printf("Pontos turísticos: \n");
	scanf("%i", &pont_tur);
}
void calcular(){
	pib_pc = pib/populacao;
	densidade_pop = populacao/area;
}
void exibir(){
	printf("\nCarta %02d:\n", num_carta++);
	printf("Estado: %s\n", estado);
	printf("Código: %s%s\n", estado,cod_carta);
	printf("Nome da cidade: %s\n", cidade);
	printf("População: %i\n", populacao);
	printf("Área: %.3f km²\n", area);
	printf("PIB: R$%.2f\n", pib);
	printf("Número de pontos turísticos: %i\n", pont_tur);
	printf("PIB per capita: R$%.2f\n", pib_pc);
	printf("Densidade populacional: %.2f hab/km²\n", densidade_pop);
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil.1252");
	leitura();
	calcular();
	exibir();
	
	printf("\n=====================\n\n"); 
	
	leitura();
	calcular();
	exibir();

 
return 0;
} 
