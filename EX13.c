#include <stdio.h>
void FuncTemp (int mat[10][10], int lin, int col)
{
	int		alet,		//aleatórios
			i, j;		//contadores
	
	for (i = 0; i < lin; i++)
	{
		for (j = 0; j < col; j++)
		{
			do
			{
				alet = rand () % 100;	
			} while (alet == 0);

			if (j != i)
			{
				mat[i][j] = alet;
				//alet = 0;
			}
			else
			{
				mat[i][j] = 0;
			}	//fim if else
		}	//fim for
	}	//fim for
}	//fim função que gera volores aleatórios

void ProcdTabTemp (int mat[10][10], int lin, int col)
{
	int		alet,		//aleatórios
			i, j;		//contadores
			
	printf("Tabela de tempo de cidade para cidade:\n\n");
	printf("O   D\n");
	printf("    ");
	for (i = 0; i < lin; i++)
	{
		printf("%d	", i);
	}	//fim for
	printf("\n");
	for (i = 0; i < lin; i++)
	{
		printf("%d: ", i);
		for (j = 0; j < col; j++)
		{
			printf("| %d	", mat[i][j]);
		}	//fim for
		printf("|");
		printf("\n");
	}	//fim for
}	//fim procedimento

void QuestC (int mat[10][10], int lin, int col)
{
	//VAR'S
	int origem,
		destino,		
		soma = 0;		
	
	//INÍCIO
	printf("----------\n");
	printf("Para encerar o planejamento da roda, digite '7'!\n\n");
	printf("Origem: ");
	scanf("%d", &origem);
	printf("Destino: ");
	scanf("%d", &destino);	
	
	if (destino != 7 && destino < 7 && 
		 origem != 7 && origem < 7)
	{
		printf("Tempo de %d para %d: %dh\n", origem, destino, mat[origem][destino]);
		printf("----------\n");
		do
		{		
			//soma o valor relacionado a matriz com a origem e o destino	
			soma = soma + mat[origem][destino];
			origem = destino;
			
			printf("De cidade %d para: ", origem);
			scanf("%d", &destino);
			if (destino != 7 && destino < 7)
			{
				printf("Tempo de %d para %d: %dh\n", origem, destino, mat[origem][destino]);
				printf("----------\n");
			}	//fim if
			else
			{
				printf("----------\n");
				printf("Fim da rota!\n");
			}	//fim else
		} while (destino != 7 && destino < 7);
	}	//fim if
	else
	{
		printf("----------\n");
		printf("Fim da rota!\n");
	}	//fim else
	
	printf("Tempo total: %dh.\n", soma);
}	//fim quest C

void QuestB (int mat[10][10], int lin, int col)
{	
	//VAR'S
	int i, j, k, l;		//contadores
	
	//INÍCIO
	printf("\n");
	printf("Triangulo inferior\n");
	for (i = 0; i < lin; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (mat[i][j] != 0)
			{
				printf("- %d	", mat[i][j]);
			} //fim if
		}	//fim for
		printf("\n");
	}	//fim for
	
	printf("\n");
	printf("Triangulo superior\n");
	printf("\n");
	l = lin;
	for (i = 0; i < lin; i++)
	{
		k = lin;
		k = k - l;	
		for (j = k; j < col; j++)
		{
			if (mat[i][j] != 0)
			{
			printf("- %d	", mat[i][j]);
			}	//fim if
		}	//fim for
		l--;
		printf("\n");
	}	//fim for
}	//Fim procedimento

void QuestA (int mat[10][10])
{
	//VAR'S
	int origem, destino; 	
	
	//INÍCIO
	printf("\nEscolha a cidade origem e destino\n");
	printf("Origem (O): ");
	scanf("%d", &origem);
	printf("Destino (D): ");
	scanf("%d", &destino);
	
	printf("Tempo necessário: %dh", mat[origem][destino]);
}	//fim procedimento

int main()
{ 
	//VAR'S
	int 	mat[10][10],		//matriz
			lin = 7,	//linha
			col = 7,	//coluna
			op;		//opção
			
	//INÍCIO
	//adiciona valores aleatórios para a matriz
	FuncTemp (mat, lin, col);	
		
	//Exibe os valores que foram adiocionados na matriz
	ProcdTabTemp (mat, lin, col);	
	
	//Questões
	printf("\nDigite a opção: ");
	scanf("%d", &op);
	switch (op)
	{
		case 1:
			QuestA (mat);		
		break;
		
		case 2:
			QuestB (mat, lin, col);
		break;
		
		case 3:
			QuestC (mat, lin, col);
		break;
		
		default:
			printf("Fim do programa!");
	}	//fim switch
}	//fim main
