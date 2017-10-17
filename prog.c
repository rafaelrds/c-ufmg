#include <stdio.h>
#include "funcao.h"

int main ()
{
	int a,b ;
	printf("Digite a e b: ");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("EDivisivel (a,b) = %d\n", EDivisivel (a,b));

	return (0);
}
