#include <stdio.h>

int main(){
    int numero;
    puts("Ingresa un numero");
    scanf("%d", &numero);
    int conta = 0;
    while (conta < numero){
        if (conta != 0){
            if (conta %7 != 0){
                printf("Resultado: %d \n",conta );
            }
            
        }
        conta ++;
    }
    
}