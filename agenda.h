#ifndef AGENDA_H
#define AGENDA_H

#include "contacto.h"

void addContacto(Contacto **agenda);
void listContactos(Contacto *agenda);
void freeAgenda(Contacto **agenda);

#endif