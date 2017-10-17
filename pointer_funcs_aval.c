#include <stdio.h>
#include <string.h>

int StrLen(char *str)
{
	int len=0;
	while(*str)
	{
		str++;
		len++;
	}
	return len;
}

void StrCat(char *destino, char *origem)
{
	while (*destino)
		destino++;
	while (*origem)
	{
		*destino = *origem;
		destino++;
		origem++;
	}
}

int main ()
{
	char str1[100], str2[100], str3[100];
	printf("Digite um string (str1):");
	gets(str1);
	printf("strlen(str1): %d StrLen(str1) %d\n", strlen(str1), StrLen(str1));
	
	printf("Digite duas strings (str2, str3):\n");
	gets(str2);
	gets(str3);
	StrCat(str2, str3);
	printf("StrCat(str2,str3); str2: %s\n", str2);
	
	return (0);
}
