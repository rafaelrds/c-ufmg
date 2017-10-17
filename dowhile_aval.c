#include <stdio.h>
int main ()
{
	int index = 0, contador = 0;
	char letras[5] = "Joao";
	do
	{
		printf("%c", letras[index]);
		if (!((contador+1) % 5))
			(index==3) ? index=0 : ++index;
		contador++;
	} while (contador < 1000);
	printf("\n");
	return (0);
}
