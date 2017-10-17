#include <stdio.h>
int main ()
{
	int vetor[] = {1,2,3,4,5,6,7,8,9,10};
	int *a = &vetor[2];
	int *b = vetor;
	printf("&vector[2] %p %p\n", a, b+2);
}
