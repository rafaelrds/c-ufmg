#include <stdio.h>
float prod (float x, float y)
{
	return (x*y);
}

int main ()
{
	float saida;
	saida=prod(42.5,0.0067);
	printf("A saida e: %f\n", saida);
	return (0);
}