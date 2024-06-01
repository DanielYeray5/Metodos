#include <stdio.h>

int main()
{
    float precio1;
    int cliente;
    float descuento, descuento2;
    printf("Introduce la cantidad deseada ");
    scanf("%f", &precio1);
    printf("¿Eres cliente? (1 es si, 0 es no) ");
    scanf("%d", &cliente);
    (cliente == 1) ? printf("El precio con descuento es de: %f", precio1 - (precio1 * 0.20)) : printf("El precio con descuento es de: %f", precio1 - (precio1 * 0.05));
    
    return 0;
}