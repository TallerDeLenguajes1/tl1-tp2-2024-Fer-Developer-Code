#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct compu
{
    int velocidad;  // entre 1 y 3 GHz
    int anio;       // entre 2015 y 2023
    int cantidad;   // entre 1 y 8
    char *tipo_cpu; // valores del arreglo tipos
} typedef PCs;

PCs inicializar();
void mostrarDatos(PCs pc);

int main()
{
    srand(time(NULL));
    PCs computadoras[5];
    for (int i = 0; i < 5; i++)
    {
        computadoras[i] = inicializar();
        mostrarDatos(computadoras[i]);
    }
}

PCs inicializar()
{
    PCs pc;
    pc.tipo_cpu = (char *)malloc(10 * sizeof(char));
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    int sorteo = rand() % 6;
    pc.velocidad = rand() % 3 + 1;
    pc.anio = rand() % (2023 - 2015 + 1) + 2015;
    pc.cantidad = rand() % 8 + 1;
    pc.tipo_cpu = strcpy(pc.tipo_cpu, tipos[sorteo]);
    return pc;
}

void mostrarDatos(PCs pc)
{
    printf("\n");
    printf("Velocidad: %d\n", pc.velocidad);
    printf("Anio: %d\n", pc.anio);
    printf("Cantidad: %d\n", pc.cantidad);
    printf("Tipo de CPU: %s\n", pc.tipo_cpu);
    printf("\n");
}