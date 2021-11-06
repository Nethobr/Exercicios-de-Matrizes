#include <stdio.h> //bibliotéca padrão
#include <math.h>  //bibliotéca para operações matemáticas

int main()
{
	//VARIÁVEIS
	int			mat[12][12],
				num = 0,
				lin, col,
				i, j;
	
	//INÍCIO
	printf("Linhas (max 12): ");
	scanf("%d", &lin);
	printf("Colunas (max 12): ");
	scanf("%d", &col);
	
	if (lin > 12 || col > 12)
	{
		printf("Valor não permitido!!!");
	}
	else
	{
		for (i = 0; i < lin; i++)
		{
			for (j = 0; j < col; j++)
			{
				printf("Elemento [%d] [%d]: ", i, j);
				scanf("%d", &mat[i][j]);
				
				if (i == j && 
				mat [i][j] == 1)
				{
					num++;
				}	//fim if
			}	//fim for
		}	//fim for
	
		
		if (lin == col && num == lin)
		{
			printf("Matriz identidade!\n");
		}	
		else if (lin == col)
		{
			printf("Matriz quadrada!\n");
		}
		else
		{
			printf("Matriz sla!\n");
		}
		
		for (i = 0; i < lin; i++)
		{
			for (j = 0; j < col; j++)
			{
				printf("%d ", mat[i][j]);
			}	//fim for
			printf("\n");
		}	//fim for
	}	//fim else
	return 0;	
}	//Final main
