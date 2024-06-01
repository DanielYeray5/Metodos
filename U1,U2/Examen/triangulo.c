#include <stdio.h>

int main()
{
    float ladoUno, ladoDos, ladoTres;
    puts("Ingresa un lado");
    scanf("%f", &ladoUno);
    puts("Ingresa otro lado ");
    scanf("%f", &ladoDos);
    puts("Ingresa el ultimo lado ");
    scanf("%f", &ladoTres);

    if ((ladoUno * ladoUno) + (ladoDos * ladoDos) == (ladoTres * ladoTres) || (ladoDos * ladoDos) + (ladoTres * ladoTres) == (ladoUno * ladoUno) || (ladoTres * ladoTres) + (ladoUno * ladoUno) == (ladoDos * ladoDos))
    {
        printf("El triangulo es rectangulo");
    }else{
        printf("El triangulo no es retangulo");
    }
    return 0;
}