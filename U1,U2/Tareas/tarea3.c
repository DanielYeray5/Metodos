#include <stdio.h>

int main(){

    int n,m;
    puts("Ingresa el numero de filas");
    scanf("%d",&n);

    puts("Ingresa el numero de columnas");
    scanf("%d",&m);

    for (int  i = 1; i <= n; i++)
    {
        for (int j = 1; j<=m; j++){
            printf("%d\t", i*j);
        }
        printf("\n");
    }
    

    return 0;
}