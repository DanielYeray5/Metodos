#include <stdio.h>
#include <string.h>

int main()
{

    char palabra1[20], palabra2[20];
    puts("Ingresa una palabra");
    scanf("%s", palabra1);
    puts("Ingresa una otra palabra");
    scanf("%s", palabra2);
    int comparacion = strcmp(palabra1, palabra2);

    if (comparacion > 0)
    {
        printf("La palabra %s es mayor que la palabra %s\n", palabra1, palabra2);
    }
    else if (comparacion < 0)
    {
        printf("La palabra %s es menor que la palabra %s\n", palabra1, palabra2);
    }
    else
    {
        printf("Ambas palabras son iguales\n");
    }
    printf("%d", comparacion);

    return 0;
}
//Devuele un 0 si las cadenas son iguales
//Devuelve  un numero negativo si la plabra 1 es menor que la palabra 2
//Devuelve un numero mayor a 0 si la palabra 1 es mayor a la palabra 2