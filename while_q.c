#include <stdio.h>
int main ()
{
	char Ch;
	Ch='\0';
	while (Ch!='q')
	{
		scanf("%c", &Ch);
	}
	return (0);
}