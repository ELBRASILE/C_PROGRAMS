/*

Eric Matias Ferreira Dias 
Universidade Estadual de Goiás 
Sistemas De Informação 
4° Período. 

2 - Faça um programa que preencha uma matriz 5X5 colocando o número da coluna
em todas as linhas desta coluna e escreva a matriz.



*/


#include <stdio.h>
#include <locale.h>

#define T 5
int main()
{
	
	setlocale(LC_ALL,"portuguese"); 
	int Matriz[T][T],I,J;
	
	for(I=0;I<T;I++)
	{
		for(J=0;J<T;J++)
		{
			Matriz[I][J] = J; 
		}	
	} 
	
	for(I=0;I<T;I++)
	{
		for(J=0;J<T;J++)
		{
			printf("%d",Matriz[I][J]); 
		}	
		printf("\n"); 
	} 
	
	return 0; 
}
