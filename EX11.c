#include <stdio.h> //bibliot�ca padr�o
#include <math.h>  //bibliot�ca para opera��es matem�ticas

int main()
{
	//VARI�VEIS
	int 		matA[3][4],		//matriz A
				matB[4][3],		//matriz B
				i, j;			//contadores
	
	//IN�CIO
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("Elementos [%d] [%d]: ", i, j);
			scanf("%d", &matA[i][j]);
			matB[j][i] = matA[i][j];
		}	//fim for
	}	//fim for
	
	printf("\nA\n");
	
	//A
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", matA[i][j]);
		}	//fim for
		printf("\n");
	}	//fim for
	
	printf("\nB\n");
	
	//B
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", matB[i][j]);
		}	//fim for
		printf("\n");
	}	//fim for
	return 0;	
}	//Final main
