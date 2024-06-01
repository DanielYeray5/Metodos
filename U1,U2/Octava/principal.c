#include <stdio.h>

int main(){
    int arreglo[10];
    for (int i = 0; i < 10; i++){
        arreglo[i] = 10;
        printf("%d \n", arreglo[i]);
    }
    
    return 0;
}

/*
Los valores de Tipo String se tienen que inicializar como si fuera un arreglo
    char string[] = "Hola mundo";
    printf("Palabra: %s \n", string);
    return 0;

Dos (Do while)
    int i = 0;
    do{
        printf("Valor de i = %d \n", i);
        i++;
    }while(i < 3);

    puts("Fin");

Tres(Arreglos)
    int vector[10];
    int i = 0;
    while (i < 10){
        vector[i] = 10;
        printf("%d \n", vector[i]);
        i++;
    }
*/