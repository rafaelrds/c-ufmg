#include <stdio.h>
int main ()
{
	char string[100];
	int i, cont;
	printf("\n\nDigite uma frase: ");
	gets(string);
	printf("\n\nFrase digitada:\n%s", string);
	
	cont = 0;
	for (i=0; string[i] != '\0'; i=i+1)
	{
		if(string[i] == 'c')
			cont = cont + 1;
	}
	
	printf("\nNumero de caracteres c = %d\n", cont);
	return (0);
}