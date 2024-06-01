#include <stdio.h>

int main(){
    int numero;
    puts("Ingresa un número");
    scanf("%i", &numero);
    int conta = 0;
    while (conta < numero){
        if (conta % 3 == 0){
            printf("Numeros divisibles entre tres dentro de los numeros ingresados %i\n", conta);
        }
        conta ++;
    }
    return 0;
}