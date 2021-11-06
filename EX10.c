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
			
			if (mat[i][j] == 0)
			{
				vet[0] ++;
			}	//fim if
		}	//fim for
	}	//fim for

	//verifica se é matriz triangular
	for (i = 19; i >= 0; i--)
	{
		k = 19;
		k = k - i;
		for (j = 0; j < k; j++)
		{
			if (mat[k][j] == 0 && j != k)
			{
				vet[1] ++;
			}	//fim if
			else
			{
				vet[0] ++;
			}
		}	//fim for	
	}	//fim for
	
	printf("\n");
	if (vet[1] == vet[0])
	{
		printf("Matriz triângular!\n");
	}
	else
	{
		printf("Matriz normal!\n");
	}
	
	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 20; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}	//fim for
}
