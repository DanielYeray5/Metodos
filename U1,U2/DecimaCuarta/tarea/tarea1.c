#include <stdio.h>
#include <string.h>
#include <math.h>

int factorial(int x);

int main()
{
    int x, fact;
    puts("Ingresa un numero");
    scanf("%d", &x);
    fact = factorial(x);
    printf("El factorial es: %d\n", fact);
    return 0;
}
int factorial(int a)
{
    if (a == 0)
        return 1;
    return a * factorial(a - 1);
}