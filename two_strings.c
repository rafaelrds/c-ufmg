#include <stdio.h>
int main ()
{
	char a[100], b[100];
	gets(a);
	gets(b);
	printf("\nA primeira string digitada foi: %s\n", a);
	printf("A segunda string digitada foi: %s\n", b);
	printf("A segunda letra da primeira string foi: %c\n", a[1]);
	printf("A segunda letra da segunda string foi: %c\n", b[1]);
	return (0);
}