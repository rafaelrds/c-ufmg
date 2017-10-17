#include <stdio.h>
#include <stdlib.h>

void main(int argc, char const *argv[])
{
	int mes;
	char *nomemes [] = {"Janeiro", "Fevereiro", "Março", "Abril",
						"Maio", "Junho", "Julho", "Agosto", "Setembro",
						"Outubro", "Novembro", "Dezembro"};
	if (argc==4)
	{
		mes = atoi (argv[2]);
		if (mes<1 || mes>12)
			printf("Erro!\nUso: data dia mes ano, todos inteiros\n");
		else
			printf("\n%s de %s de 19%s\n", argv[1], nomemes[mes-1], argv[3]);
	}
	else
		printf("Erro!\nUso: data dia mes ano, todos inteiros\n");
}
