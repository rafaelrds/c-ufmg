#include <stdio.h>
#include "funcao.h"

void main ()
{
	int num;
	printf("Entre com numero: ");
	scanf("%d", &num);
	if (EPar(num))
		printf("\n\nO numero eh par.\n");
	else
		printf("\n\nO numero eh impar.\n");
}