#include <stdio.h>
int main ()
{
	int dia, mes, ano, m, y, total;
	do
	{
	printf("Entre um dia: \n");
	scanf("%d", &dia);
	printf("Entre um mes: \n");
	scanf("%d", &mes);
	printf("Entre um ano: \n");
	scanf("%d", &ano);

	m = (mes + 9) % 12;
	y = y - m/10;
	total = (m*306 + 5)/10 + ( dia - 1 );
	} while (dia < 1 || dia > 31 || mes < 1 || mes > 12 || ano < 1900 || ano > 2100);
	printf("Esse eh o %d dia do ano\n", total);
	return (0);
}