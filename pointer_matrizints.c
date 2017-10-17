#include <stdio.h>

int main ()
{
	int matrx[100][100];
	int i,j;
	
	for (i=0;i<100;i++)
		for (j=0;j<100;j++)
			*(*(matrx+i)+j) = (100*i)+j+1;

	printf("%d\n", matrx[99][99]);
	
	return (0);
}
