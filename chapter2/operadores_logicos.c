#include <stdio.h>
int main()
{
    int i, j; 
    
    printf("informe dois n˙meros(cada um sendo 0 ou 1): ");
    scanf("%d%d", &i, &j);
    printf("%d AND %d È %d\n", i, j, i && j);
    printf("%d OR %d È %d\n", i, j, i || j);
    printf("NOT %d È %d\n", i, !i);
}