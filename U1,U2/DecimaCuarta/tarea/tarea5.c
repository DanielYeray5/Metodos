#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    clock_t inicio = clock();
    system("open -t");
    clock_t fin = clock();

    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    long cicloReloj = fin - inicio;
    
    printf("Tiempo en que tardó en abrir el bloc de notas: %f\n", tiempo);
    printf("Total de cliclos realizados: %ld\n", cicloReloj);
    return 0;
}
