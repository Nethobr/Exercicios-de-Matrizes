#include <stdio.h> //bibliot�ca padr�o
#include <math.h>  //bibliot�ca para opera��es matem�ticas

int main()
{
	//VARI�VEIS
	int			matA[5][5],		//matriz A
				matB[5][5],		//matriz B
				i, j;			//contadores
	
	//IN�CIO
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
