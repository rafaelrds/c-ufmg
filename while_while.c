#include <stdio.h>
int main ()
{
	char Ch[100], check[] = "while";
	while (strcmp(check, Ch) != 0)
	{
		gets(Ch);
	}
	return (0);
}