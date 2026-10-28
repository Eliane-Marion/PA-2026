#include <stdio.h>
int main()
{	//            0  1   2  3  4  5   6   7  8   9 
	int v[10] = {34, 56, 4, 3, 8, 6, 33, 22, 12, 1};
	
	// MÉTODO DE PESQUISA SEQUENCIAL: Pesquisar do primeiro ao último elemento
	int valor = 56;
	int encontrou = 0; //0 flag | 0 -> False e 1 -> True
	
	for (int i = 0; i <10 ; i++)
	{
		if (v[i] == valor)
		{
			encontrou = 1 // flag diz que encontrou
			break; // sai do laço
		}
	}
	
	if (encontrou)
	{
		printf("Encontrou!")
	}
	else
	{
		printf("Nao encontrou!")
	}
	
	
	
	
	
}