#include <stdio.h> //bibliotéca padrão
#include <math.h>  //bibliotéca para operações matemáticas

int main()
{
	//VARIÁVEIS
	int			matA[5][5],
				matB[5][5],
				i, j;
	
	//INÍCIO
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("Elemento [%d] [%d]: ", i, j);
			scanf("%d", &matA[i][j]);
			
			if (i == j)
			{
				matB[i][j] = matA[i][j] * 3;
			}
			else
			{
				matB[i][j] = matA[i][j] * 2;
			}
		}	//fim for
	}	//fim for	
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d", matB[i][j]);
		}	//fim for
		printf("\n");
	}	//fim for
	return 0;	
}	//Final main
