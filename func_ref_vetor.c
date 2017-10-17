#include <stdio.h>

void levetor(int *vet, int dimensao);

void main (void)
{	
	int SIZE;
	printf("Escolha um tamanho para o vetor de ints: ");
	scanf("%d", &SIZE);
	int vet[SIZE];

	printf("Entre com os numeros\n");
	levetor(vet, SIZE);
	int i;

	printf("{ ");
	for (i=0;i<SIZE;i++)
		printf("%d ", vet[i]);
	printf("}\n");
}

void levetor (int *vet, int dimensao)
{
	int i;
	for (i=0;i<dimensao;i++)
		scanf("%d", vet+i);
}
