#include <stdio.h>
#include <stdlib.h>

#include "agenda.h"

int main(void)
{
    Contacto *agenda = NULL;

    char entrada [20];

    int opcion;

    do
    {
        printf("\n========================\n");
        printf("   AGENDA DE CONTACTOS    ");
        printf("==========================\n");

        printf("1. Agregar nuevo contacto\n");
        printf("2. Lista de todos los contactos\n");
        printf("3. Salir\n");

        printf("\nSeleccione una opcion: ");

        fgets(entrada, sizeof(entrada), stdin);

        if (sscanf(entrada, "%d", &opcion) !=1)
        {
            printf("\nOpcion invalida.\n");
            continue;
        }

        switch (opcion)
        {
            case 1:
                addContacto(&agenda);

                break;

            case 2:
                listContactos(agenda);

                break;

            case 3:
                printf("\nSaliendo de la agenda...\n");

                break;

            

            default:

                printf("\nOpcion invalida.\n");

                break;
        }

    } while (opcion !=3);

    freeAgenda(&agenda);

    return 0;


}