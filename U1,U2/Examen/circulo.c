#include <stdio.h>

int main(){
    float circuloUno, circuloDos, circuloTres;

    printf("Ingresa el radio del primer circulo ");
    scanf("%f", &circuloUno);
    printf("Ingresa el radio del segundo circulo ");
    scanf("%f", &circuloDos);
    printf("Ingresa el radio del tercer circulo ");
    scanf("%f", &circuloTres);

    float PI = 3.1416;
    float resultado1, resultado2, resultado3;
    
    resultado1 = PI * (circuloUno*circuloUno);
    resultado2 = PI * (circuloDos*circuloDos);
    resultado3 = PI * (circuloTres*circuloTres);

    printf("El area del circulo 1 es de: %2f \n", resultado1);
    printf("El area del circulo 2 es de: %2f \n", resultado2);
    printf("El area del circulo 3 es de: %2f ", resultado3);

    return 0;

}