#include <stdio.h>
int main()
{
	int Dias;
	float Anos;
	scanf("%d", &Dias);
	Anos = Dias/365.25;
	printf("\n\n%d dias equivalem a %f anos.\n", Dias, Anos);
	return (0);
}