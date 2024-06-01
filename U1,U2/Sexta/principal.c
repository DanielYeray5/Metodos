#include <stdio.h>

int main(){
    int numero = 1;
    int cuadrado = 1, cubo = 1;
    while (numero <= 500)
    {
        cuadrado  = numero * numero;
        cubo = numero * numero * numero;
        printf("%d %d %d \n", numero , cuadrado , cubo );
        numero ++;
    }
    
    return 0;
}

// Uno
/* int numero = 55;

    if (numero < 100){
        printf("El número es menor que 100");
        if (numero > 50){
            printf(" y mayor que 50 \n");
        }

    }
    printf("Fin del programa \n");*/

// Dos
/*int x,b;
    puts("Ingresa el tiempo trabajando");
    scanf("%i",&x);
    puts("Ingresa tu sueldo:");
    scanf("%i",&b);
    float a = (b *100)/10;
    if (x >= 5 && a == 1000){
        puts("Tiene credito");
    }else{
        puts("No tiene credito ");
    }
    */

//Tres
/*int horasTraba, precioHora;
    float salario;
    puts("Ingresa las horas trabajadas");
    scanf("%i", &horasTraba);
    puts("Ingresa el precio");
    scanf("%i", &precioHora);
    if (horasTraba <= 40)
    {
     salario = horasTraba *40;
    }else{
     salario = 40* precioHora + (precioHora *1.5*(horasTraba-40));
    }
    printf("Salario semanal: %f \n", salario);*/

//Cuatro
/*int descuento = 10;
    int descuentoCliente = 20;
    int cliente = 1;
    int z = 0;

    z= (cliente) ? descuentoCliente : descuento;
    printf("El descuento es de %d \n", z);

    puts("Fin del programa");*/

//Cinco
/*int contador = 0;
    while (contador < 3)
    {
        printf("Hola \n");
        contador ++;
    }
    puts("Fin");*/

//Cinco dos
/* int numero = 1;
    while (numero < 1000)
    {
        printf("%d, \n", numero);
        numero ++;
    }*/