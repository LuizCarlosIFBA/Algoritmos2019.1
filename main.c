#include <stdio.h>
#include <stdlib.h>
int main ()
{   int maior_Ponto=0;
    int carteira,carteira_MaiorPontos, pontos;
	double val_Multa,sair,tot_Multa;
	do{
		printf("Escreva o número da carteira de motorista(apenas valores de 1 a 9999)");
		do{
			scanf("%d",&carteira);
			printf(carteira<1||carteira>9999?"Digite apenas valores de 1 a 9999 ":" ");
		}while(carteira<1||carteira>9999);
		printf("Escreva o número de pontos");
		scanf("%d",&pontos);
		if(pontos>maior_Ponto){
			maior_Ponto=pontos;
            carteira_MaiorPontos=carteira; 
        }			
		printf("Escreva o valor das multas");
		scanf("%lf",&val_Multa);
	    
		if(pontos>19){
			printf("Carteira %d",&carteira);
			printf("Valor da dívida %d",&val_Multa);
		}
		
	    tot_Multa = tot_Multa+val_Multa;
		
		printf("Deseja continuar(Sim-1 Não-pressione qualquer número)");
		scanf("%lf",&sair);
    }while(sair!=1); 	
	
	printf("Multa arrecadada %d ",tot_Multa);
	printf("Cateira de que possui o maior número de pontos %d ",carteira_MaiorPontos);
	
	system("pause");			
    return 0;
}
