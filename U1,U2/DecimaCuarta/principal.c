#include <stdio.h>

int main(){
    int x = 17, y;
    int *p;
    p = &x;
    printf("El valor de x es: %d\n", *p);
    y=*p +3;
    printf("El valor de y es: %d\n",y);
}

/*
!Uno
*int potencia(int x, int y);

*int main(){
* *    x = 2;
*    y = 3;
*    max = potencia(x, y);
*    printf("La potencia es: %d\n", max);
*    return 0;
*}

!Dos 
*int potencia(int a, int b){
*    if (b < 1)
*        return 1;
*        return a * potencia(a, b - 1);
*}

*struct CD
*{
 *   char titulo[30];
  *  char artista[20];
*};

*int main()
*    struct CD cd1;
*    puts("Ingresa el titulo");
*    scanf("%s", cd1.titulo);
 *   printf("%s\n", cd1.titulo);
*    return 0;
*}

!Tres
*int main(){
    *int x = 20;
    *printf("Numero de x: %d\n",x);
    *printf("La direccion de memoria de x es: %p\n",&x);

    *return 0;
}
*/