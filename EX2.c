#include <stdio.h> //bibliotéca padrão
#include <math.h>  //bibliotéca para operações matemáticas

int main()
{
	//VARIÁVEIS
	int			matA[5][5],		//matriz A
				matB[5][5],		//matriz B
				i, j;			//contadores
	
	//INÍCIO
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("Elemento [%d] [%d]: ", i, j);
			scanf("%d", &matA[i][j]);
			
			matB[i][j] = matA[i][j] * 3;
		}	//fim for
	}	//fim for
	
	printf("\n");
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("Elemento [%d] [%d]: %d -> %d\n", i, j, matA[i][j], matB[i][j]);
		}	//fim for
	}	//fim for
	
	return 0;	
}	//Final main
