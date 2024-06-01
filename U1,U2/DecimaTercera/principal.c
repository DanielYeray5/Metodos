#include <stdio.h>
#include <string.h>
#include <math.h>

float maximo(float a, float b);

int main(){
    float a,b;
    puts("Ingresa un numero");
    scanf("%f",&a);
    puts("Ingresa otro numero");
    scanf("%f",&b);
    float mayor = maximo(a,b);

}



// strlen: Devuelve la longitud  de la cadena sin tomar en cuenta el caracter final de la cadena
// strcpy: Copia los elementos de un arreglo en otro arreglo
// strcat: Concatena(une) la cadena de dos arreglos
// strcmp: Compara las dos cadenas y devuelve 0 si la dos cadenas son iguales

/* 
*/


/*
Uno
int len;
    char origen[] = "brisas";
    char destino[11] = "para";
    strcat(destino, origen);
    printf("destino: %s\n", destino);

    Dos

     int len;
    char destino[] = "para";
    char origen[] = "brisas";
    len = strcmp( destino, origen);
    printf("Resultado: %d\n", len);
*/