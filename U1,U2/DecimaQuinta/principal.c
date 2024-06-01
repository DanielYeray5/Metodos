#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>


int main(void){
    int i, n;
    char *buffer;
    printf("Teclea la longitud de la cadena ");
    scanf("%d",&i);

    buffer = (char*)malloc((i+1)*sizeof(char));
    if(buffer == NULL) exit(1);

    for(n=0; n<i; n++)
    buffer[n] = rand()%26+'a';
    buffer[i]='\n';

    printf("Random string: %s\n", buffer);
    free(buffer);
}


/* int main(){
    int array[10] ={1,2,3,4,5,6,7,8,9,0};
    int len = sizeof(array)/ sizeof(int);

    printf("Los bytes del arreglo son: %lu\n", sizeof(array));
    printf("Cada entero tiene: %lu bytes\n", sizeof(int));
    printf("El arreglo tiene %d elementos\n", len);

    return 0;
} */
/*
int main()
{
    char cadena[10];
    printf("un int ocupa %ld bytes\n", sizeof(int));
    printf("un char ocupa %ld bytes\n", sizeof(char));
    printf("un float ocupa %ld bytes\n", sizeof(float));
    printf("un double ocupa %ld bytes\n", sizeof(double));
    printf("Cadena ocupa %ld bytes\n", sizeof(cadena));
    return 0;
}
*/
/*
void intercambio(int *a, int *b);
int main(void) {
    int x = 2;
    int y = 5;
    printf("Antes x = %d, y = %d\n", x, y);
    intercambio(&x,&y);
    printf("Despues x = %d, y = %d\n",x,y);
}

void  intercambio(int *a, int *b){
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}*/

//? El & devuelve la direccion
//! El * devuelve el valor
/*
int *p, y;

void func()
{
    int x = 40;
    p = &x;
    y = *p;
    *p = 23;
}
int main()
{
    func();
    y = *p;
    *p = 25;
    printf("El valor de y es %d \nEl valor de *p es %d \nEl valor de p es %p", y, *p, p);
}
*/