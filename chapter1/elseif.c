#include <stdio.h>
int main ()
{
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	if (num>10)
		printf("\n\nO numero e maior que 10\n");
	else if (num==10)
	{
		printf("\n\nVoce acertou!\n");
		printf("O numero eh igual a 10!\n");
	}
	else if (num<10)
		printf("\n\nO numero eh menor que 10\n");
	return(0);
}