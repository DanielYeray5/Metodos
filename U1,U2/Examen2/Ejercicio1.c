#include <stdio.h>

void tablaMulti(int numero, int multiplicador) {
    if (multiplicador <= 10) {
        printf("%d x %d = %d\n", numero, multiplicador, numero * multiplicador);
        tablaMulti(numero, multiplicador + 1);
    }
}
void calcularTablas(int numero) {
    if (numero <= 100) {
        printf("Tabla de multiplicar del %d:\n", numero);
        tablaMulti(numero, 1);
        printf("\n");
        calcularTablas(numero + 1);
    }
}
int main() {
    calcularTablas(1);
    return 0;
}
