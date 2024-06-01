#include <stdio.h>

struct Atleta
{
    char deporte[50];
    char nombre[50];
    char pais[50];
    int numMedallas;
};
int main()
{
    struct Atleta atl[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Ingresa el deporte del atleta %d ", i + 1);
        scanf("%s", atl[i].deporte);
        printf("Ingresa el nombre del atleta %d ", i + 1);
        scanf("%s", atl[i].nombre);
        printf("Ingresa el pais del atleta %d ", i + 1);
        scanf("%s", atl[i].pais);
        printf("Ingresa tu numero de medallas: ");
        scanf("%d", &atl[i].numMedallas);
    }
    int mayorNumMedallas = atl[0].numMedallas;
    int indiceMayor = 0;

    for (int i = 1; i < 10; i++)
    {
        if (atl[i].numMedallas > mayorNumMedallas)
        {
            mayorNumMedallas = atl[i].numMedallas;
            indiceMayor = i;
        }
    }
    puts("\nAtleta con mayor numero de medallas; ");
    printf("%s\n", atl[indiceMayor].deporte);
    printf("%s\n", atl[indiceMayor].nombre);
    printf("%s\n", atl[indiceMayor].pais);
    printf("%d\n", atl[indiceMayor].numMedallas);
    return 0;
}
