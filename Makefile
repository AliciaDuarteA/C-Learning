CC = gcc-16
CFLAGS = -Wall -Wextra -std=c11

agenda: main.o agenda.o
	$(CC) $(CFLAGS) main.o agenda.o -o agenda

main.o: main.c agenda.h contacto.h
	$(CC) $(CFLAGS) -c main.c
	
agenda.o: agenda.c agenda.h contacto.h
	$(CC) $(CFLAGS) -c agenda.c

clean:
	rm -f *.o agenda
	