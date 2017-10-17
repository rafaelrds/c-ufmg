#include <stdio.h>
#include <string.h>

int strend(char *s, char *t)
{
	while(*s)
	{
		if (!strcmp(s,t))
			return 1;
		s++;
	}
	return 0;
}

int main ()
{
	char s[100], t[100];
	printf("strend(s,t) retorna 1 caso t ocorra no fim, e 0 caso contrário\n");
	printf("Digite s: ");
	gets(s);
	printf("Digite t: ");
	gets(t);
	printf("strend(s,t): %d\n", strend (s,t));

	return (0);
}
