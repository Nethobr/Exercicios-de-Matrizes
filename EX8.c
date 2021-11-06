#include <stdio.h> 

void main()
{ 
	//VAR'S
	int		mat[7][4],		//matriz
			vet[7],			//vetor
			i, j;			//contadores
	
	//INÍCIO
	for (i = 0; i < 7; i++)
	{
		vet[i] = 0;
		for (j = 0; j < 4; j++)
		{
			printf("Elementos [%d] [%d]: ", i, j);
			scanf("%d", &mat[i][j]);
			
			//pega o menor valor 
			if (vet[i] > mat[i][j] || vet[i] == 0)
			{
				vet[i] = mat[i][j];
			}	//fim if
		}	//fim for
	}	//fim for
	
	printf("\n");
	
	for (i = 0; i < 7; i++)
	{
		printf("Menor valor da linha %d: %d		-> ", i, vet[i]);
		
		for (j = 0; j < 4; j++)
		{
			printf("|%d", mat[i][j]);
		}	//fim for
		printf("|\n");
	}	//fim for
}	//fim main
