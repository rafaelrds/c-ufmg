#include <stdio.h>
int main ()
{
	int num;
	printf("Digite um numero correspondente a um dia da semana: ");
	scanf("%d", &num);
	switch (num)
		{
			case 1:
				printf("\nDomingo\n");
			break;
			case 2:
				printf("\nSegunda\n");
			break;
			case 3:
				printf("\nTerca\n");
			break;
			case 4:
				printf("\nQuarta\n");
			break;
			case 5:
				printf("\nQuinta\n");
			break;
			case 6:
				printf("\nSexta\n");
			break;
			case 7:
				printf("\nSabado\n");
			break;
			default:
				printf("\nO numero deve ser entre 1 - 7\n");
		}
		return (0);
}
