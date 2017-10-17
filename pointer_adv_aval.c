#include <stdio.h>

int main ()
{
	int x, *p, **q;
	
	p = &x;
	q = &p;
	x = 10;
	
	printf("\n%d\n", **q); // 10
	
	return (0);
}
