#include <stdio.h>

int main()
{
    int a;
    int i = 0;
    puts("Ingresa el tamaño del arreglo");
    scanf("%d", &a);
    float arreglo[a]; 
    float sum = 0, product = 1, resultado;


    while(i < a){
        printf("Ingresa el valor del elemento %d:\n ", (i+1));
        scanf("%f", &arreglo[i]);
        sum += arreglo[i];
        product *= arreglo[i]; 
        i++;
    }
    resultado = sum / a;
    printf("Promedio: %f\n", resultado);
    printf("Multiplicacion: %f\n",product);

    return 0;
}
/*
Uno
    int arreglo[101];
    int i = 0;

    while (i <= 100){
        arreglo[i] = i * 2 ;
        printf("2 * %d = %d \n", i, arreglo[i]);
        i++;
    }
Dos
int arreglo[100];
    int i = 99;
    while (i >= 0)
    {
        printf("Mi arreglo [%d]\n", i);
        i--;
    }
Tres
int main(){
    int arregloUno[] = {3,5,6,8,4,7,8,5,3,1};
    int arregloDos[] = {3,4,6,8,9,1,2,3,0,9};
    int resultado;

    resultado = arregloUno[3] % (arregloDos[2]/2);
    printf("El resultado de la operación 1 es: %d\n", resultado);

    resultado = arregloDos[arregloUno[1]] - arregloUno["9"];
    printf("El resultado de la operación 2 es: %d\n", resultado);

    resultado = arregloUno[0] + arregloUno[1 + 2];
    printf("El resultado de la operación 3 es: %d\n", resultado);

    resultado = arregloUno[5] + arregloDos[5];
    printf("El resultado de la operación 4 es: %d\n", resultado);

    resultado = (arregloUno[3]/arregloDos[2])/2;
    printf("El resultado de la operación 5 es: %d\n", resultado);

    return 0;
}
*/