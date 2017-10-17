#include <stdio.h>
int main ()
{
	float matrx [50][50];
	float *p;
	int count;
	p=matrx[0];
	for (count=0;count<2500;count++)
	{
		*p=0.0;
		p++;
	}

	int i,j;
	for (i=0;i<50;i++)
	{
		for (j=0;j<50;j++)
		{
			printf("%4.1f ", matrx[i][j]);
		}
		printf("\n");
	}

	return (0);
}
