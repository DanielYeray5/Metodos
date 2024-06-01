
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float f[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};
    printf("\t\tEntero\t\tFlotante \n\n");
    for (int x = 0; x < 10; x++) {
        printf("Elemento %d: \t%d\t\t%f\n", x, i[x], f[x]);
    }
    return 0;
}


/*

! Uno
int main()
{
    int x, i;
    puts("Ingresa el tamaño");
    scanf("%d", &x);
    int *arreglo = (int *)malloc(x * sizeof(int));
    if (arreglo == NULL) exit(1);

    puts("Ingresa los valores");
    for (i = 0; i < x; i++)
    {
        scanf("%d", arreglo + i);
    }
    puts("Valores ingresados");
    for ( i = 0; i < x; i++)
    {
        printf("%d", *(arreglo + i));
    }
    printf("\n");
    free(arreglo);

    return 0;
} */