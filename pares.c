#include <stdio.h>
int main ()
{
	int i;
	for(i=1; i<=100; i++)
		if(!(i%2)) printf("%d ", i);
}