#include <stdio.h>

typedef struct {
    int numerador;
    int denominador;
} Fraccion;

Fraccion sumaFracciones(Fraccion f1, Fraccion f2) {
    Fraccion resultado;
    resultado.numerador = (f1.numerador * f2.denominador) + (f2.numerador * f1.denominador);
    resultado.denominador = f1.denominador * f2.denominador;
    return resultado;
}
Fraccion restaFracciones(Fraccion f1, Fraccion f2) {
    Fraccion resultado;
    resultado.numerador = (f1.numerador * f2.denominador) - (f2.numerador * f1.denominador);
    resultado.denominador = f1.denominador * f2.denominador;
    return resultado;
}
Fraccion divisionFracciones(Fraccion f1, Fraccion f2) {
    Fraccion resultado;
    resultado.numerador = f1.numerador * f2.denominador;
    resultado.denominador = f1.denominador * f2.numerador;
    return resultado;
}
void imprimirFraccion(Fraccion f) {
    printf("%d/%d\n", f.numerador, f.denominador);
}
int main() {   
    Fraccion f1, f2;
    
    puts("Ingresa el numerador de la primera fraccion");
    scanf("%d", &f1.numerador);
    puts("Ingresa el denominador de la primera fraccion");
    scanf("%d", &f1.denominador);
    puts("Ingresa el numerador de la segunda fraccion");
    scanf("%d", &f2.numerador);
    puts("Ingresa el denominador de la segunda fraccion");
    scanf("%d", &f2.denominador);

    Fraccion suma = sumaFracciones(f1, f2);
    printf("Suma: ");
    imprimirFraccion(suma);

    Fraccion resta = restaFracciones(f1, f2);
    printf("Resta: ");
    imprimirFraccion(resta);

    Fraccion division = divisionFracciones(f1, f2);
    printf("División: ");
    imprimirFraccion(division);

    return 0;
}
