#include <stdio.h>

int main() {
    int tabla[4][4]; 

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            tabla[i][j] = (i + 2) + (j + 2); 
        }
    }

    printf("Tabla de valores de 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", tabla[i][j]);
        }
        printf("\n");
    }

    return 0;
}



/*
Uno
int main(){

    int longitudSerie = 50;
    int i;

    for ( i = 1; i <= (longitudSerie/2); i++){
        printf("%d,", 2*i);
        printf("%d,", 3*i);
    }
    return 0;
}

Dos
int main(){

    int i,o,cont = 0;
    puts("Ingresa un numero");
    scanf("%d",&o);

    for(i = 0; i <= o; i++){
        printf("%d,",i);
        cont += i;
    }
    printf("La suma de los numeros es: %d",cont);

    return 0;
}
*/