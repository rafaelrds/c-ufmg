#include <stdio.h>
int main ()
{
	int num,valor;
	int *p;
	num=55;
	p=&num;
	valor=*p;
	printf("\n\nValor da variavel valor: %d\n", valor);
	printf("Endereco para onde o ponteiro aponta: %p\n", p);
	printf("Valor da variavel apontada: %d\n", *p);
	return(0);
}
