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
 //cilíndricos, cúbicos, de  paralelepípedos,  cônicos  e  de  pirâmides.
	printf("Esse programa determina o volume total comportado por N tanques com formatos semelhantes e o volume total!\n\n");
		
	printf("Digite a quantidade total de tanques: ");
	scanf("%d", &n2);
	for(i2=1;i2<=n2;i2++){
		printf("\n\nMenu\n1- cilíndro\n2- cúbo\n3- paralelepípedo\n4- cône\n5- pirâmide");
		printf("\n\nEscolha o tipo de tanque: ");
		scanf("%d", &op);
	
		switch(op){
			case 1:
				printf("Digite a quantidade de cilíndros: ");
				scanf("%d", &n);
				i2 = i2+n;
				for(i=1;i<=n;i++){
					raio=0;
					alt=0;
					printf("Digite a altura do cilíndro %d: ",i);
					scanf("%f", &alt);
					printf("Digite o raio do cilíndro %d: ",i);
					scanf("%f", &raio);		
					totalCilindros = totalCilindros+(3.14*(raio*raio)*alt);
				}
				break;
			case 2:
				printf("Digite a quantidade de Cúbos: ");
				scanf("%d", &n);
				i2 = i2+n;
				for(i=1;i<=n;i++){
					alt=0;
					printf("Digite um dos lados do cúbo %d: ",i);
					scanf("%f", &alt);
					totalCubos = totalCubos+(alt*alt*alt);
				}
				break;
			case 3:
				printf("Digite a quantidade de paralelepípedo: ");
				scanf("%d", &n);
				i2 = i2+n;
				i=1;
				while(i<=n){
					comp=0;
					raio=0;
					alt=0;
					printf("Digite a comprimento do paralelepípedo %d: ",i);
					scanf("%f", &comp);
					printf("Digite a largura do paralelepípedo %d: ",i);
					scanf("%f", &raio);	
					printf("Digite a altura do paralelepípedo %d: ",i);
					scanf("%f", &alt);		
					totalParal = totalParal+(alt*raio*comp);
					i++;
				}
				break;
			case 4:
				printf("Digite a quantidade de cônes: ");
				scanf("%d", &n);
				i2 = i2+n;
				for(i=1;i<=n;i++){
					raio=0;
					alt=0;
					printf("Digite a raio do cône %d: ",i);
					scanf("%f", &raio);
					printf("Digite a altura do cône %d: ",i);
					scanf("%f", &alt);			
					totalCone = (((raio*alt)*3.14)+totalCone);
				}
				break;
			case 5:
				printf("Digite a quantidade de pirâmides: ");
				scanf("%d", &n);
				i2 = i2+n;
				i=1;
				do{
					comp=0;
					alt=0;
					printf("Digite a area da pirâmide %d: ",i);
					scanf("%f", &comp);
					printf("Digite a altura da pirâmide %d: ",i);
					scanf("%f", &alt);		
					totalPiram = totalPiram+((alt*raio)/3);
					i++;
				}while(i<=n);
				break;
			default:
				printf("Opção invalida!");
		}
	}
	totalGeral = totalCilindros+totalCubos+totalParal+totalCone+totalPiram;
	system("cls");
	
	printf ("\n\n\tRESULTADOS");	
	printf ("\n\nO volume total dos cilindros é de %.2f", totalCilindros);
	printf ("\n\nO volume total dos cubos é de %.2f", totalCubos);
	printf ("\n\nO volume total dos paralelepipedos é de %.2f", totalParal);
	printf ("\n\nO volume total dos cônes é de %.2f", totalCone);
	printf ("\n\nO volume total das piramides é de %.2f", totalPiram);
	printf ("\n\n\tO Valor total é de %.1f!",totalGeral);
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}


