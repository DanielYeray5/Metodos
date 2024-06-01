#include <stdio.h>

struct Empleado
{
    char nombre[50];
    char sexo[50];
    float sueldo;
};

int main(){
    struct Empleado emp[5];
    for(int i=0; i<5; i++){
    printf("Ingresa el nombre del empleado %d ", i+1);
    scanf("%s", emp[i].nombre);
    printf("Ingresa el sexo del empleado %d ", i+1);
    scanf("%s", emp[i].sexo);
    printf("Ingresa el sueldo del empleado %d ",i +1);
    scanf("%f", &emp[i].sueldo);
    }

    float menor_sueldo = emp[0].sueldo;
    int indiceMenor = 0; 

    for (int i = 1; i < 5; i++) {
        if (emp[i].sueldo < menor_sueldo) {
            menor_sueldo = emp[i].sueldo;
            indiceMenor = i;
        }
    }
    puts("\nEmpleado con el menor sueldo: ");
    printf("%s\n", emp[indiceMenor].nombre);
    printf("%s\n", emp[indiceMenor].sexo);
    printf("%f\n", emp[indiceMenor].sueldo);
    
}
