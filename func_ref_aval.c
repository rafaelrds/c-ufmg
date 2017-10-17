#include <stdio.h>

void ZeraInts (int *a, int *b);

void main (void)
{
	int a = 100 ,b = 200;
	printf("a=%d, b=%d\n", a, b);
	ZeraInts (&a, &b);
	printf("ZeraInts(a,b)\n");
	printf("a=%d, b=%d\n", a, b);
}

void ZeraInts (int *a, int *b)
{
	*a = 0;
	*b = 0;
}
