#include <stdio.h> //bibliotéca padrão
#include <math.h>  //bibliotéca para operações matemáticas

int main()
{
	//VARIÁVEIS
	int			matA[5][2],		//matriz A
				matB[5][2],		//matriz B
				i, j;			//contadores
	
	//INÍCIO
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Elemento [%d] [%d]: ", i, j);
			scanf("%d", &matA[i][j]);
		}	//fim for		
	}	//fim for
	
	printf("\n");
	
	for (i = 0; i < 5; i++)
	{
		//soma 
		matB[i][0] = 0;
		for (j = 0; j < 2; j++)		
		{
			matB[i][0] = matB[i][0] + matA[i][j];	
		}	//fim for

		//multplicação
		matB[i][1] = 1;
		for (j = 0; j < 2; j++)		
		{
			matB[i][1] = matB[i][1] * matA[i][j];	
		}	//fim for
	}	//fim for
		
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Elemento [%d] [%d]: %d -> %d\n", i, j, matA[i][j], matB[i][j]);
		}	//fim for
	}	//fim for
	
	printf("\n");
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d ", matB[i][j]);
		}	//fim for
		printf("\n");
	}	//fim for
	return 0;	
}	//Final main
