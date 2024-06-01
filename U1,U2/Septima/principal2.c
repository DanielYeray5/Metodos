#include <stdio.h>

int main()
{
    int numero;
    puts("Ingresa un número");
    scanf("%i", &numero);
    int conta = 0;
    while (conta < numero){
        if (conta != 0){
            if (conta % 2 == 0 && conta % 7 == 0){
                printf("Numero divisible dentro del numero ingresado %d \n", conta);
            }
            
        }
        conta ++;
    }
    return 0;
}