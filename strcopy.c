#include <stdio.h>
#include <string.h>
int main ()
{
	int count;
	char str1[100], str2[100];
	printf("str1: ");
	gets(str1);
	// for (count=0;str1[count];count++) //opcao 1
	// 	str2[count]=str1[count];
	strcpy(str2,str1);					 //opcao 2
	printf("str2 (copiada com for): %s\n", str2);
}
