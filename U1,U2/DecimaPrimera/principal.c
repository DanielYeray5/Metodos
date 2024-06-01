#include <stdio.h>

int main(){
    int num, i, j;
    puts("Ingresa un número");
    scanf("%d", &num);

    for ( i = 0; i < num ; i++){

        for ( j = num; j > i; j--){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for ( i = 0; i < num; i++){

        for ( j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}