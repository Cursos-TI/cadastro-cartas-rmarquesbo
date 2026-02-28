#include <stdio.h>
#include <locale.h>


char estado[2], cod_carta[3], cidade[50];
int populacao, pont_tur, num_carta = 1;
float area, pib, pib_pc, densidade_pop;
float super;

// armazenar carta 1

int populacao1, pont_tur1;
float area1, pib1, pib_pc1, densidade_pop1, super1;
	
	
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
	super = (float)populacao + (float)pont_tur + area + pib + pib_pc + (1.0f/densidade_pop);
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
	printf("Super Poder: %.2f\n", super);
}
void salvar_carta1(){
	populacao1 = populacao;
    pont_tur1 = pont_tur;
    area1 = area;
    pib1 = pib;
    pib_pc1 = pib_pc;
    densidade_pop1 = densidade_pop;
    super1 = super;
}

void comparar(){
    printf("\nComparação de Cartas:\n");

    int pop = populacao1 > populacao;
    int ar = area1 > area;
    int pi = pib1 > pib;
    int tur = pont_tur1 > pont_tur;
    int pibpc = pib_pc1 > pib_pc;
    int sp = super1 > super;
    int dens = densidade_pop1 < densidade_pop;

    printf("População: Carta %d venceu (%d)\n", pop ? 1 : 2, pop);
    printf("Área: Carta %d venceu (%d)\n", ar ? 1 : 2, ar);
    printf("PIB: Carta %d venceu (%d)\n", pi ? 1 : 2, pi);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", tur ? 1 : 2, tur);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", dens ? 1 : 2, dens);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibpc? 1 : 2, pibpc);
    printf("Super Poder: Carta %d venceu (%d)\n", sp ? 1 : 2, sp);
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil.1252");
	leitura();
	calcular();
	exibir();
	salvar_carta1();
	
	printf("\n=====================\n\n"); 
	
	leitura();
	calcular();
	exibir();
	
	comparar();

return 0;
} 
