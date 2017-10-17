#include <stdio.h>
int main()
{
	int y, *p, x; /* duas variaveis inteiras e uma ponteiro de inteiro*/
    y = 0; /* inicia int y com valor 0 */
    p = &y; /* inicia ponteiro p com o valor de memoria de y */
    x = *p; /* atribui a x o valor da variavel pra qual p aponta */
    x = 4; /* muda o valor de x para 4  (x=4) */
    (*p)++; /* incrementa o valor da variavel para qual p aponta (y=1) */
    x--; /* decrementa o valor de x (x=3) */
    (*p) += x; /* incrementa o valor de y em x indiretamente (y=4) */
    printf ("y = %d\n", y); /* y = 4 */
    return(0);
}
