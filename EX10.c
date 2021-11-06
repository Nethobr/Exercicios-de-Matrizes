#include <stdio.h> 

void main()
{ 
	//VAR'S
	int		mat[20][20],		//matriz
			vet[2] = {0, 0},	//vetor de armazenamento
			i, j, k;			//contadores
	
	//INÍCIO
	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 20; j++)
		{
			printf("Elemento [%d] [%d]: ", i , j);
			scanf("%d", &mat[i][j]);
			
			if (mat[i][j] == 0 )
			{
				vet[0] ++;
			}	//fim if
		}	//fim for
	}	//fim for

	//verifica se é matriz triangular
	for (i = 0; i < 20; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d", mat[i][j]);
			if (mat[i][j] == 0)
			{
				vet[1] ++;
				printf(" - %d", vet[1]);
			}	//fim if
			else if (mat[i][j] != 0 && i != j)
			{
				vet[0] ++;
			}	//fim else
		}	//fim for
		printf("\n");
	}	//fim for
	
	printf("\n");
	if (vet[1] == vet[0])
	{
		printf("Matriz triângular!\n");
	}	//fim if
	else
	{
		printf("Matriz normal!\n", vet[0], vet [1]);
	}	//fim else
	
	//imprime a matriz
	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 20; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}	//fim for
}	//fim main
