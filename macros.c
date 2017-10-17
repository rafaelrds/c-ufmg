#define max(A,B) ((A>B) ? (A) : (B))
#define min(A,B) ((A<B) ? (A) : (B))
#include <stdio.h>
int main ()
{
	int i,j,t,r;
	printf("entre i,j,t,r\n");
	scanf("%d %d %d %d", &i, &j, &t, &r);
	int x = max(i,j);
	int  y = min(t,r);
	printf("\nmax(i(%d),j(%d)) = %d", i, j, x);
	printf("\nmin(t(%d),r(%d)) = %d", t, r, y);
	return 0;
}