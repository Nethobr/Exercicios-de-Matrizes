#include <stdio.h> //bibliotéca padrão
#include <math.h>  //bibliotéca para operações matemáticas

void FuncDeci (int matriz, int * vet)
{
	if (vet [0] < matriz || vet [0] == 0)	//maior
	{
		vet[0] = matriz;
	}
	
	if (vet [1] > matriz || vet [1] == 0)	//menor
	{
		vet[1] = matriz;
	}
}	//fim função

int main()
{
	//VARIÁVEIS
	int			matriz[10][8],		//matriz
				vet[2] = {0, 0},	//vetor que armazena o maior e o menor
				i, j;				//contadores
		
	//INÍCIO
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("Elemento [%d] [%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
			
			FuncDeci (matriz[i][j], &vet);
		}	//fim for
	}	//fim for
	
	printf ("\n");
	
	printf("Maior: %d\nMenor: %d", vet[0], vet[1]);
	
	return 0;	
}	//Final main
