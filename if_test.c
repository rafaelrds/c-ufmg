#include <stdio.h>
int main ()
{
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	if(num>10) printf("\n\nO numero eh maior que 10");
	if(num==10)
	{
		printf("\n\nVoce acertou!");
		printf("O numero eh igual a 10.\n");
	}
	if(num<10) printf("\n\nO numero eh menor que 10");
	return (0);
}