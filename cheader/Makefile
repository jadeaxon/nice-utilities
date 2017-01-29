# Builds the cheader (C Headers) command.

all: cheader

cheader: main.o
	gcc main.o -o cheader -L/usr/local/lib -lnicethings

main.o: main.c
	gcc -c main.c

clean:
	rm -f cheader # Linux
	rm -f *.exe # Cygwin
	rm -f *.o




