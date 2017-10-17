#include <stdio.h>
int main ()
{
	char str[100], str_inv[100];
	int i, size = 0;
	printf("Digite uma string: ");
	gets(str);
	for (i = 0; str[i] != '\0'; i++)
		size++;
	for (i = 0; str[i] != '\0'; i++)
		str_inv[i] = str[size - i - 1];
	printf("%s\n", str_inv);
}
