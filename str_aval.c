#include <stdio.h>
#include <string.h>
int main ()
{
	char str1[100], str2[100], str3[100], str4[100], str_total[100];
	printf("Digite quatro strings seguidas de <ENTER>\n str1: ");
	gets(str1);
	printf(" str2: ");
	gets(str2);
	printf(" str3: ");
	gets(str3);
	printf(" str4: ");
	gets(str4);
	strcat (str_total, str1), strcat(str_total, str2),
	strcat (str_total, str3), strcat(str_total, str4);
	printf("The total concatenated string is: %s\n", str_total);
	return(0);
}