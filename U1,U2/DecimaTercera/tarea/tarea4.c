#include <stdio.h>
#include <string.h>

int main(){
    char palabra1[100];
    char palabra2[100];
    char palabra3;

    puts("Ingresa una palabra");
    scanf("%s",palabra1);
    puts("Ingresa otra palabra");
    scanf("%s",palabra2);
    int longitud = strlen(palabra2);

    for(int i = 0; i < longitud/2; i++){
        palabra3 = palabra2[i];
        palabra2[i] = palabra2[longitud-i-1];
        palabra2[longitud-i-1] = palabra3;
    } 
    int resultado = strcmp(palabra2, palabra1);
    if(resultado==0){
        printf("Es palindroma ");
    }else{
        printf("No es palindroma");
    }

    return 0;
}