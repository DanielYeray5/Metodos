#include <stdio.h>

int main(){
    int numero, multiplicador = 0;
    printf("Ingresa un numero ");
    scanf("%d",&numero);
    printf("Tabla de multiplicar de %d en orden ascendente:\n", numero);

    while (multiplicador <= 100)
    {
        printf("%d x %d = %d \n", numero, multiplicador, numero * multiplicador);
        multiplicador ++;
    }
    printf("Tabla de multimplicar de %d en orden descendente: \n", numero);
    multiplicador = 100;
    while (multiplicador >= 0)
    {
        printf("%d x %d = %d \n", numero, multiplicador, numero * multiplicador);
        multiplicador --;
    }
    return 0;
    
}