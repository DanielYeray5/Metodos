#include <stdio.h>
#include <math.h>

float calcularAreaTriangulo(float a, float b, float c) {
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}
int main() {
    float ladoA, ladoB, ladoC;
    printf("Ingresa el lado A: ");
    scanf("%f", &ladoA);
    printf("Ingresa el lado B: ");
    scanf("%f", &ladoB);
    printf("Ingresa el lado C: ");
    scanf("%f", &ladoC);
    
    float area = calcularAreaTriangulo(ladoA, ladoB, ladoC);
        printf("El área del triángulo es: %.2f\n", area);
    
    return 0;
}
