#include<stdio.h>
/*
Sintaxe de uma função:
tipo_retorno nome_funcao(parâmetros)
{
	corpo_funcao;
	return valor;
}

EXERCÍCIOS

1. Crie uma funcao chamada 'calcular_med_3n()' que receba 3 valores por
parâmetro e retorne o valor da media.
2. Crie uma funcao chamada 'calcular_delta()' que receba 3 valores por
parâmetro e retorne o valor de delta.
tipo_retorno nome_subalgoritmo(parametros)

3. Crie uma funcao chamada 'prox_num()' que receba 1 valor por
parâmetro e retorne o próximo numero.
4. Crie uma funcao chamada 'prox_num_par()' que receba 1 valor por
parâmetro e retorne o próximo numero par.
5. Crie uma funcao chamada 'maior_2n()' que receba 2 valores por
parâmetro e retorne o número de maior valor.
6. Crie uma funcao chamada 'menor_3n()' que receba 3 valores por
parâmetro e retorne o número de menor valor.

*/
float somar_numeros(float num1, float num2) 
{
	float s;
	s = num1 + num2; // 10 + 45 -> s = 55
	return s; // 55
}

float calcular_media(float num1, float num2, float num3) // <--- Assinatura | num1 e num2 são parâmetros
{
	return (num1 + num2 + num3) / 3;
}


// Programa principal
int main()
{
	float n1, n2, n3, soma, media;

	printf("Soma = %f", calcular_media(7.8, 6, 9.9);
	
	printf("Media = %f", calcular_media(n1, n2, n3););
	



}