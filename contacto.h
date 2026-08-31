#ifndef CONTACTO_H
#define CONTACTO_H

typedef struct Contacto
{
    char nombre[50];
    char apellido[50];
    char telefono[13];

    struct Contacto *siguiente;

} Contacto;

#endif
