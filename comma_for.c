#include <stdio.h>
int main ()
{
	int x, y;
	for(x=0, y=0; x+y < 100; ++x, y++)
		printf("%d ", x+y);
}