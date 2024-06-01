#include <stdio.h>
#include <string.h>

int main() {
    char palabra[50];
    int contador[30] = {0};

    printf("Ingresa una palabra: ");
    scanf("%s", palabra);
    int longitud = strlen(palabra);
    char letras[longitud + 1];
    strcpy(letras, "");

    for (int i = 0; i < longitud; i++) {
        int j;
        for (j = 0; j < strlen(letras); j++) {
            if (palabra[i] == letras[j]) {
                contador[j]++;
                break;
            }
        }
        if (j == strlen(letras)) {
            letras[strlen(letras)] = palabra[i];
            letras[strlen(letras) + 1] = '\0';
            contador[j]++;
        }
    }
    for (int i = 0; i < strlen(letras); i++) {
        printf("%c: %d\n", letras[i], contador[i]);
    }

    return 0;
}
