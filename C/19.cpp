#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int massaPrimeiro,massaSegundo,massaTerceiro,protonUm,protonDois,protonTres,neutronUm,neutronDois,neutronTres; 
	printf ("\n\nEste programa l� as caracteristicas de tr�s elementos qu�micos e os determina!");
	
 	printf ("\n\nDigite a massa do do primeiro elemento: ");
	scanf ("%d", &massaPrimeiro);
 	printf ("\n\nDigite a massa do do segundo elemento: ");
	scanf ("%d", &massaSegundo);
 	printf ("\n\nDigite a massa do do terceiro elemento: ");
	scanf ("%d", &massaTerceiro);

 	printf ("\n\nDigite a quantidade de pr�tons do primeiro elemento: ");
	scanf ("%d", &protonUm);
 	printf ("\n\nDigite a quantidade de pr�tons do segundo elemento: ");
	scanf ("%d", &protonDois);
 	printf ("\n\nDigite a quantidade de pr�tons do terceiro elemento: ");
	scanf ("%d", &protonTres);	

 	printf ("\n\nDigite a quantidade de n�utron do terceiro elemento: ");
	scanf ("%d", &neutronUm);	
 	printf ("\n\nDigite a quantidade de n�utron do terceiro elemento: ");
	scanf ("%d", &neutronDois);	
 	printf ("\n\nDigite a quantidade de n�utron do terceiro elemento: ");
	scanf ("%d", &neutronTres);	
	system("cls");
	if(massaPrimeiro==massaSegundo){
		printf("Os elementos 1 e 2 s�o isobaros!");
	}
	if(massaPrimeiro==massaTerceiro){
		printf("Os elementos 1 e 3 s�o isobaros!");
	}
	if(massaSegundo==massaTerceiro){
		printf("Os elementos 2 e 3 s�o isobaros!");
	}
	
	
	if(protonUm==neutronDois){
		printf("Os elementos 1 e 2 s�o isotonos!");
	}
	if(protonUm==neutronTres){
		printf("Os elementos 1 e 3 s�o isotonos!");
	}
	if(neutronDois==neutronTres){
		printf("Os elementos 2 e 3 s�o isotonos!");
	}
	
		
	if(massaPrimeiro==protonDois){
		printf("Os elementos 1 e 2 s�o isotonos!");
	}
	if(massaPrimeiro==protonTres){
		printf("Os elementos 1 e 3 s�o isotonos!");
	}
	if(protonDois==protonTres){
		printf("Os elementos 2 e 3 s�o isotonos!");
	}
	printf ("\n\nObrigado por utilizar nosso sistema!\n\n");
	system ("Pause");
	return 0;
}

