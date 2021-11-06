#include <stdio.h> //bibliotéca padrão
#include <math.h>  //bibliotéca para operações matemáticas

void FuncPar (int matriz[10][6], int vet[2], int i, int j)
{
	vet [0] = matriz[i][j] % 2;
	
	if (vet[0] == 0)
	{
		vet [1] ++;
	}	//fim if
}	//fim função dos pares
int main()
{
	//VARIÁVEIS
	int			matriz[10][6],		//matriz
				vet[2] = {0, 0},	//número pares e calc
				i, j;				//contadores
	
	//INÍCIO
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("Elemento [%d] [%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
			
			FuncPar (matriz, vet, i, j);
		}	//fim for
	}	//fim for	
	
	printf("\n");
	printf("Quantidade de pares: %d.", vet[1]);
	return 0;	
}	//Final main
