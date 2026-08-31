#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "agenda.h"

int validarTelefono(char *telefono)
{
    int i = 0;

    while (telefono[i] != '\0')
    {
        if (telefono[i] < '0' || telefono [i] > '9')
        {
            return 0;
        }
        i++;
    }
    if (i == 0 || i > 10)
    {
        return 0;
    }
    return 1;
}

void removeNewLine(char *text)
{
    text[strcspn(text, "\n")] = '\0';
}

void addContacto(Contacto **agenda)
{
    Contacto *newContacto;

    newContacto = malloc(sizeof(Contacto));

    if (newContacto == NULL)
    {
        printf("Error: No se pudo reservar memoria.\n");
        return;

    }


printf("\nNombre: ");
fgets(newContacto->nombre, sizeof(newContacto->nombre), stdin);
removeNewLine(newContacto->nombre);

printf("\nApellido: ");
fgets(newContacto->apellido, sizeof(newContacto->apellido), stdin);
removeNewLine(newContacto->apellido);

do
{
printf("Telefono: ");
fgets(newContacto->telefono, sizeof(newContacto->telefono), stdin);
removeNewLine(newContacto->telefono);

if (!validarTelefono(newContacto->telefono))
{
    printf("No es un numero valido de telefono. Solo use numeros, maximo 10 digitos.\n");
}

}while (!validarTelefono(newContacto->telefono));

newContacto->siguiente = NULL;


if (*agenda==NULL)
{
    *agenda = newContacto;
}
else
{
    Contacto *actual = *agenda;

    while(actual->siguiente !=NULL)
    {
        actual = actual->siguiente;
    }
    actual->siguiente = newContacto;
}

printf("\nContacto agregado satisfactoriamente. \n");

}

void listContactos(Contacto *agenda)
{
    if (agenda == NULL)
    {
        printf("\nLa agenda esta vacia.\n");
        return;
    }

Contacto *actual = agenda;
int numero = 1;

printf("\n=====CONTACTOS=====\n");

while (actual !=NULL)
{
    printf("\nContacto %d\n", numero);
    printf("Nombre: %s\n", actual->nombre);
    printf("Apellido: %s\n", actual->apellido);
    printf("Telefono: %s\n", actual->telefono);

    actual = actual->siguiente;

    numero++;
}
}

void freeAgenda (Contacto **agenda)
{
    Contacto *actual = *agenda;

    while (actual !=NULL)
    {
        Contacto *siguiente = actual ->siguiente;

        free(actual);

        actual = siguiente;
    }
 *agenda = NULL;
    

}