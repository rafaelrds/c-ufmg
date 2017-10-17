#include <stdio.h>

int EPar (int a)
{
	return !(a%2);
}

int main ()
{
	int num;
	printf("Entre com um numero: ");
	scanf("%d", &num);
	(EPar(num)) ? printf("\n\nO numero eh par.\n") 
				: printf("\n\nO numero eh impar\n");
	return (0);
}
