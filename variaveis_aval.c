#include <stdio.h>

int num;

int func(int a, int b)
{
	a = (a+b)/2;
	num -= a;
	return a;
}

main ()
{
	int first = 0, sec = 50;
	num = 10;
	num += func(first, sec); /* Valor de num, first e sec? */
	printf("\n\nConfira! num = %d\tfirst = %d\tsec =%d\n", num, first, sec);
}
