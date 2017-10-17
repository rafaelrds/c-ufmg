#include <stdio.h>

int main ()
{
	float fpi = 3.1415, *pf, **ppf;
	pf = &fpi;
	ppf = &pf;
	
	printf("fpi: %f\n", fpi);
	printf("pf:  %f\n", *pf);
	printf("ppf: %f\n", **ppf);

	return (0);
}
