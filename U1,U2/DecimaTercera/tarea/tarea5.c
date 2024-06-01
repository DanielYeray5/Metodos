#include <stdio.h>
#include <string.h>
#include <math.h>

int maximo(int num1, int num2);
int main()
{
    int a, b;
    printf("Ingresa el primer numero: ");
    scanf("%d", &a);
    printf("Ingresa el segundo numero: ");
    scanf("%d", &b);
    int mayor = maximo(a, b);
    printf("El numero mayor es: %d\n", mayor);

    return 0;
}
int maximo(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
