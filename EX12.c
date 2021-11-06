#include <stdio.h> 

void ProcdImprime (int matA[4][2], int matB[4][2], int i, int j)
{
	printf("\nA	B\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d", matA[i][j]);
		}	//fim for
		printf("	");
		for (j = 0; j < 2; j++)
		{
			printf("%d", matB[i][j]);
		}	//fim for
		printf("\n");
	}	//fim for
}	//fim procedimento

void main()
{ 
	//VAR'S
	int		matA[4][2],
			matB[4][2],
			matG[4][2],
			i, j;
	
	//INÍCIO
	printf("A:\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &matA[i][j]);
		}	//fim for
	}	//fim for
	
	printf("B:\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &matB[i][j]);
		}	//fim for
	}	//fim for
	
	//exibindo os valores
	ProcdImprime (matA, matB, i, j);
	
	//A = B -> B = A
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			matG[i][j] = matB[i][j];
			matB[i][j] = matA[i][j];
			matA[i][j] = matG[i][j];
		}	//fim for
	}	//fim for
	
	//exibindo os valores trocados
	ProcdImprime (matA, matB, i, j);	
}	//fim main
