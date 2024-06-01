#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct Fecha{
    int dia, mes, anio;
};
int main(){
    struct Fecha nacimiento, actual;
    int edad_anios, edad_meses, edad_dias;

    puts("Ingrese la fecha de nacimiento separado por un espacio (dia mes año): ");
    scanf("%d %d %d", &nacimiento.dia, &nacimiento.mes, &nacimiento.anio);
    puts("Ingrese la fecha actual seprados por un espacio (dias mes año): ");
    scanf("%d %d %d", &actual.dia, &actual.mes, &actual.anio);

    clock_t inicio = clock();
    if (actual.mes < nacimiento.mes || (actual.mes == nacimiento.mes && actual.dia < nacimiento.dia)){
        edad_anios = actual.anio - nacimiento.anio - 1;
        edad_meses = 12 - (nacimiento.mes - actual.mes);
        edad_dias = nacimiento.dia - actual.dia;
    }else{
        edad_anios = actual.anio - nacimiento.anio;
        edad_meses = actual.mes - nacimiento.mes;
        edad_dias = actual.dia - nacimiento.dia;
    }
    
    printf("La edad es: %d años, %d meses, %d días\n", edad_anios, edad_meses, edad_dias);
    clock_t fin = clock();
    double tiempo_medido = (double)(fin - inicio) * 60;
    long ciclos_reloj = fin - inicio;
    printf("El codigo se ejecuto en %f segundos.\n", tiempo_medido);
    printf("Se realizaron %ld ciclos de reloj.\n", ciclos_reloj);

    return 0;
}