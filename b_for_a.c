#include <stdio.h>
int main ()
{
	char s[100];
	printf("\n\nDigite uma string: ");
	gets(s);

	int i, count;
	for(i=0; s[i] != '\0'; i++)
	{
		if(s[i]=='a')
		{
			count++;
			s[i] = 'b';
		}
	}

	printf("A nova string eh: %s\n", s);
	printf("Na string antiga, o numero de caracteres 'a' foi: %d\n", count);
	return(0);
}