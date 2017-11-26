
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
    float medias=0,media=0,conj=0,a[100],desvio,soma,variancia;
    int posicao=0;
	printf("\n___________________________________________________________________________\n");
	printf("	Calculo Media, Desvio Padrao e Variança dos Conjuntos\n");
    	printf("	     								     \n");
	printf("__________________________________________________________________________\n\n");
    printf("Digite o numero de elementos do conjunto e confirme com enter: ");
    scanf("%f",&conj);
    	if (conj<=100)
    	{
        	for(posicao=1;posicao<=conj;posicao++)
        	{
            	printf("Digite o elemento %d do conjunto e confirme com enter: ", posicao);
            	scanf("%f", &a[posicao]);
            	medias=medias+a[posicao];
            	media=medias/conj;
         	}
        	for(posicao=1;posicao<=conj;posicao++)
        	{
        	soma+=(a[posicao]-media)*(a[posicao]-media);
        	}
        	variancia=soma/conj;
	   	desvio=sqrt(variancia);
        printf("\n\n Media do conjunto = %f\n", media);
        printf("\n\n Variancia do conjunto = %f\n", variancia);
        printf("\n\n Desvio padrao =  %f\n\n", desvio);
	}
   	else  printf("O numero de elementos do conjunto nao pode utrapassar 100 !!!\n ");
return 0;
}
	
	

