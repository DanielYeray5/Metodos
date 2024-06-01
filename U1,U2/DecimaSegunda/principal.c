#include <stdio.h>
#include <string.h>

int main(){

    int len;
    char origen[] = "Brisas";
    char destino[11] = "para";
    strcat(destino, origen);
    printf("destino: %s\n", destino);
    return 0;
}



//strlen: Devuelve la longitud  de la cadena sin tomar en cuenta el caracter final de la cadena
//strcpy: Copia los elementos de un arreglo en otro arreglo
//strcat: Concatena la cadena de dos arreglos

/*
Uno (strlen)
int main(){
    char palabra[20];
    printf("Ingresa una palabra ");
    scanf("%s",palabra);
    int len = strlen(palabra);
    printf("La longitud de %s es: %d\n",palabra, len);
    for (int  i = 0; i < len; i++){
        for (int j = 0; j < len; j++){
            printf("*\t");
        }
        printf("\n");
    }

Dos (strcpy)
int main(){
char palabra1[20];
    char palabra2[20];
    char aux[20];
    printf("Ingresa una palabra: \n");
    scanf("%s", palabra1);
    printf("Ingresa otra palabra: \n");
    scanf("%s", palabra2);

    printf("Palabra 1 antes del intercambio: %s\n", palabra1);
    printf("Palabra 2 antes del intercambio: %s\n\n", palabra2);

    strcpy(aux, palabra1);
    strcpy(palabra1,palabra2);
    strcpy(palabra2,aux);

    printf("Palabra 1 despues del intercambio: %s\n", palabra1);
    printf("Palabra 2 despues del intercambio: %s\n", palabra2);

}
*/