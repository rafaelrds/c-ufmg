#include <stdio.h>

void Swap (int *a, int *b);

void main (void)
{
	int num1, num2;
	num1=100;
	num2=200;
	printf("a=%d b=%d\n", num1, num2);
	Swap (&num1, &num2);
	printf("Swap (a,b)\n");
	printf ("\n\nEles agora valem %d %d\n", num1, num2);
}

void Swap (int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp; 
}
