#include <stdio.h> //bibliot�ca padr�o
#include <math.h>  //bibliot�ca para opera��es matem�ticas

void FuncPar (int matriz, int * vet)
{
	vet [0] = matriz % 2;
	
	if (vet[0] == 0)
	{
		vet [1] ++;
	}
}	//fim fun��o dos pares
int main()
{
	//VARI�VEIS
	int			matriz[10][6],		//matriz
				vet[2] = {0, 0},	//n�mero pares e calc
				i, j;				//contadores
	
	//IN�CIO
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("Elemento [%d] [%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
			
			FuncPar (matriz[i][j], &vet[0]);
		}	//fim for
	}	//fim for	
	
	printf("\n");
	printf("Quantidade de pares: %d.", vet[1]);
	return 0;	
}	//Final main
