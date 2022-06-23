#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int n,i,maiorId,menorId,menor,maior,idade;
	float media;
	menorId=999;
	maiorId=0;
	printf("Esse programa le a idade de n pessoas. determina a média de idade, a idade  máxima,  a  idade  mínima,  a  quantidade  de  pessoas  maiores  de  idade  e  a  quantidade  de  pessoas  menores  de idade!\n\n");
	
	printf("\n\nA Quantidade de Pessoas: : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("\n\nA idade do individuo %d: ",i);
		scanf("%d",&idade);
		if(idade>=18){
			maior++;
		}else{
			menor++;
		}
		if(idade<menorId){
			menorId=idade;
		}
		if(idade>maiorId){
			maiorId=idade;
		}
		media=media+idade;	
	}
	media = media/n;
	printf("\n\n\t\tRESULTADOS");
	printf("\n\n\tA idade media dos %d individuos é de %.1f: ",n,media);
	printf("\n\n\tA Maior idade foi de %d! ",maiorId);
	printf("\n\n\tA Menor idade foi de %d! ",menorId);
	printf("\n\n\tExistem %d individuo(s) menor(es) de idade! ",menor);
	printf("\n\n\tExistem %d individuo(s) maior(es) de idade! ",maior);

	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}

