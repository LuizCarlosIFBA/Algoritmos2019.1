#include <stdio.h>
#include <stdlib.h>

int main()
{
	int maiorPonto = 0, numeroCarteira, numeroCarteiraMaioresPontos, pontos, sair;
	float valorMulta, totalMulta;

	do{
		printf("Escreva o número da carteira de motorista(apenas valores de 1 a 9999): ");		
		do{
		
			scanf("%d", &numeroCarteira);
			printf(numeroCarteira < 1 || numeroCarteira > 9999 ?"Digite apenas valores de 1 a 9999": "");
		
		}while(numeroCarteira < 1 || numeroCarteira > 9999);
		printf("Escreva o número de pontos: ");
		scanf("%d", &pontos);

		if (pontos > maiorPonto) {
			maiorPonto = pontos;
			numeroCarteiraMaioresPontos = numeroCarteira;
		}

		printf("Escreva o valor das multas: ");
		scanf("%f",&valorMulta);

		if (pontos >=20) {
			printf("Carteira: %d", numeroCarteira);
			printf("\nValor da dívida: %f\n", valorMulta);
		}

		totalMulta = (totalMulta + valorMulta);

		printf("Deseja continuar(Sim = 1, Não = 0)? ");
		scanf("%f", &sair);
	}while(sair != 0);

	printf("Multa arrecadada %f", totalMulta);
	printf("\nCarteira que possuí maior número de pontos %d \n", numeroCarteiraMaioresPontos);

	system("pause");
	return 0;
}