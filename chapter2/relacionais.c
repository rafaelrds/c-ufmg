/* Este programa ilustra o funcionamento dos operadores
relacionais. */
#include <stdio.h>
int main()
{
	int i, j;
	printf("\nEntre com dois números inteiros: ");
	scanf("%d%d", &i, &j);
	printf("\n%d == %d é %d\n", i, j, i==j);
	printf("\n%d != %d é %d\n", i, j, i!=j);
	printf("\n%d <= %d é %d\n", i, j, i<=j);
	printf("\n%d >= %d é %d\n", i, j, i>=j);
	printf("\n%d < %d é %d\n", i, j, i<j);
	printf("\n%d > %d é %d\n", i, j, i>j);
	return(0);
}