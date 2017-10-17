#include <stdio.h>
int mult (float a, float b, float c)
{
	printf("%f\n", a*b*c );
	return (0);
}

int main ()
{
	float x,y;
	x = 23.5;
	y = 12.9;
	mult (x,y,3.85);
	return (0);
}