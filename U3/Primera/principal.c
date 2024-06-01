#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    puts("Tamaño del arreglo: ");
    scanf("%d", &x);

    char *arreglo = (char *)malloc(x * sizeof(char));
    if (arreglo == NULL) exit(1);

    printf("Ingresa %d letras para el arreglo:\n", x);
    for (int i = 0; i < x; i++) {
        printf("Elemento %d: ", i);
        scanf(" %c", arreglo + i); 
    }

    puts("El arreglo inverso:");
    for (int i = x - 1; i >= 0; i--) {
        printf("%c ", *(arreglo + i)); 
    }
    free(arreglo);
    return 0;
}


/* int main()
{
    int i, n;
    int *buffer, *p_buffer;

    puts("Teclea la longitud del arreglo");
    scanf("%d", &n);

    buffer = (int*)malloc((n)* sizeof(int));
    if (buffer == NULL) exit(1);

    p_buffer = buffer;
    for ( i = 0; i < n; i++)
    {
        printf("Ingresa el valor %d \n", i);
        scanf("%d", p_buffer++);
    }
    p_buffer = buffer;
    puts("Los valores son:");
    for(n = 0; n<i; n++){
        printf("Arreglo[%d] = %d \n", n, *p_buffer++);
    }
    free(buffer);
    return 0;
    
} */

/* int main(){
    int x;
    puts("Ingresa el tamaño del arreglo");
    scanf("%d",&x);
    int *arreglo = (int*)malloc(sizeof(int));

    if(arreglo == NULL){
        printf("Error al asignar memoria");
        return 1;
    }
    puts("Ingresa los elementos del arreglo:");
    for(int i=0; i<x; i++){
        printf("Elemento %d: ", i);
        scanf("%d",arreglo+i);
    }
    puts("Los elementos del arreglo son:");
    for(int i=0; i<x; i++){
        printf("%d ", *(arreglo+i));
    }
    free(arreglo);
    return 0;
} */

/* int i[10],x;
float f[10];

int main(){
    printf("\t\t Entero\tFlotante\n\n");
    for (x = 0; x < 10; x++){
        printf("Elemento de %d: \t%d\t\t%f\n", x, i[x], f[x]);
    }
    return 0;
} */