#include <stdio.h>
int main ()
{
	int SIZE = 100;
	int num[SIZE];
	int count=0;
	int totalnums;
	do
	{
		printf("Entre com um numero (-999 para terminar): \n");
		scanf("%d", &num[count]);
		count++;
		if (count)
	} while (num[count-1] != -999);
	totalnums=count-1;
	
	printf("\nOs numeros que voce digitou foram: ");
	for (count=0;count<totalnums;count++)
		printf("%d ", num[count]);
	printf("\n");
	return (0);
}
