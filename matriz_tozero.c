#include <stdio.h>
int main ()
{
	float matrx [50][50];
	int i,j;
	for (i=0;i<50;i++)
		for (j=0;j<50;j++)
			matrx[i][j]=0.0;

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
