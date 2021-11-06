#include <stdio.h> 

void main()
{ 
	//VAR'S
	int		mat[15][2],		//matriz
			vetA[15],		//vetor A
			vetB[15],		//vetor B
			i, j;			//contadores
	
	//INÍCIO
	printf("VETOR A\n");
	for (i = 0; i < 15; i++)
	{
		scanf("%d", &vetA[i]);
	}	//fim for
	
	printf("VETOR B\n");
	for (i = 0; i < 15; i++)
	{
		scanf("%d", &vetB[i]);
	}	//fim for
	
	for (i = 0; i < 15; i++)
	{
		mat[i][0] = vetA[i];
		
		mat[i][1] = vetB[i];
	}	//fim for
	
	//mostrandos os valores armazenados na matriz
	printf("\n| A | B |\n");
	printf("+-------+\n");
	for (i = 0; i < 15; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("| %d ", mat[i][j]);
		}	//fim for
		printf("|\n");
	}	//fim for
	printf("+-------+\n");
}
