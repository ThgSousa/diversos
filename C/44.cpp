#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float comp,alt,raio,totalGeral,totalCilindros,totalCubos,totalParal,totalCone,totalPiram;
	int op,i,n,i2,n2;
	totalGeral=0;
	totalCilindros=0;
	totalCubos=0;
	totalParal=0;
	totalCone=0;
	totalPiram=0;
 //cil�ndricos, c�bicos, de  paralelep�pedos,  c�nicos  e  de  pir�mides.
	printf("Esse programa determina o volume total comportado por N tanques com formatos semelhantes e o volume total!\n\n");
		
	printf("Digite a quantidade total de tanques: ");
	scanf("%d", &n2);
	for(i2=1;i2<=n2;i2++){
		printf("\n\nMenu\n1- cil�ndro\n2- c�bo\n3- paralelep�pedo\n4- c�ne\n5- pir�mide");
		printf("\n\nEscolha o tipo de tanque: ");
		scanf("%d", &op);
	
		switch(op){
			case 1:
				printf("Digite a quantidade de cil�ndros: ");
				scanf("%d", &n);
				i2 = i2+n;
				for(i=1;i<=n;i++){
					raio=0;
					alt=0;
					printf("Digite a altura do cil�ndro %d: ",i);
					scanf("%f", &alt);
					printf("Digite o raio do cil�ndro %d: ",i);
					scanf("%f", &raio);		
					totalCilindros = totalCilindros+(3.14*(raio*raio)*alt);
				}
				break;
			case 2:
				printf("Digite a quantidade de C�bos: ");
				scanf("%d", &n);
				i2 = i2+n;
				for(i=1;i<=n;i++){
					alt=0;
					printf("Digite um dos lados do c�bo %d: ",i);
					scanf("%f", &alt);
					totalCubos = totalCubos+(alt*alt*alt);
				}
				break;
			case 3:
				printf("Digite a quantidade de paralelep�pedo: ");
				scanf("%d", &n);
				i2 = i2+n;
				i=1;
				while(i<=n){
					comp=0;
					raio=0;
					alt=0;
					printf("Digite a comprimento do paralelep�pedo %d: ",i);
					scanf("%f", &comp);
					printf("Digite a largura do paralelep�pedo %d: ",i);
					scanf("%f", &raio);	
					printf("Digite a altura do paralelep�pedo %d: ",i);
					scanf("%f", &alt);		
					totalParal = totalParal+(alt*raio*comp);
					i++;
				}
				break;
			case 4:
				printf("Digite a quantidade de c�nes: ");
				scanf("%d", &n);
				i2 = i2+n;
				for(i=1;i<=n;i++){
					raio=0;
					alt=0;
					printf("Digite a raio do c�ne %d: ",i);
					scanf("%f", &raio);
					printf("Digite a altura do c�ne %d: ",i);
					scanf("%f", &alt);			
					totalCone = (((raio*alt)*3.14)+totalCone);
				}
				break;
			case 5:
				printf("Digite a quantidade de pir�mides: ");
				scanf("%d", &n);
				i2 = i2+n;
				i=1;
				do{
					comp=0;
					alt=0;
					printf("Digite a area da pir�mide %d: ",i);
					scanf("%f", &comp);
					printf("Digite a altura da pir�mide %d: ",i);
					scanf("%f", &alt);		
					totalPiram = totalPiram+((alt*raio)/3);
					i++;
				}while(i<=n);
				break;
			default:
				printf("Op��o invalida!");
		}
	}
	totalGeral = totalCilindros+totalCubos+totalParal+totalCone+totalPiram;
	system("cls");
	
	printf ("\n\n\tRESULTADOS");	
	printf ("\n\nO volume total dos cilindros � de %.2f", totalCilindros);
	printf ("\n\nO volume total dos cubos � de %.2f", totalCubos);
	printf ("\n\nO volume total dos paralelepipedos � de %.2f", totalParal);
	printf ("\n\nO volume total dos c�nes � de %.2f", totalCone);
	printf ("\n\nO volume total das piramides � de %.2f", totalPiram);
	printf ("\n\n\tO Valor total � de %.1f!",totalGeral);
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}


