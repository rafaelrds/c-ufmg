#include <stdio.h>

int EDivisivel (int a, int b)
{	
	return !(a%b);
}

int main ()
{
	int a,b;

	printf("Digite a: ");
	scanf("%d", &a);
	printf("Digite b: ");
	scanf("%d", &b);
	printf("EDivisivel(a,b): %d\n", EDivisivel(a,b));

	return (0);
}