#include <stdio.h>

struct CD
{
    char titulo[30];
    char artista[20];
    int numeroCanciones;
    int precio;
    int anio;
};

int main()
{
    struct CD cd1;
    puts("Ingresa el titulo");
    scanf("%s", cd1.titulo);

    puts("Nombre del artista");
    scanf("%s", cd1.artista);

    puts("Ingresa el numero de canciones");
    scanf("%d", &cd1.numeroCanciones);

    puts("Ingresa el año");
    scanf("%d", &cd1.anio);

    puts("Ingresa el precio");
    scanf("%d", &cd1.precio);

    puts("\nDatos del artista");
    printf("%s\n", cd1.titulo);
    printf("%s\n", cd1.artista);
    printf("%d\n", cd1.numeroCanciones);
    printf("%d\n", cd1.anio);
    printf("%d\n",cd1.precio);

    return 0;
}