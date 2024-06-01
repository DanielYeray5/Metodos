#include <stdio.h>
#include <string.h>


int main() {
    char palabra1[100], palabra2[100], resultado[200];
    int longitud;
    printf("Ingresa la primera palabra: ");
    scanf("%s", palabra1);
    printf("Ingresa la segunda palabra: ");
    scanf("%s", palabra2);

    longitud = strlen(palabra1);
    strcpy(resultado, palabra1);
    
    for (int i = 0; i < longitud; i++) {
        strcat(resultado, palabra2);
    }
    printf("El resultado es: %s\n", resultado);

    return 0;
}
