#include <stdio.h>
int main ()
{
	char string[100];
	printf("Digite uma string:\n");
	gets(string);
	printf("\n\nVoce digitou %s", string);
	return (0);
}