a.out: server.o client.o 
	gcc server.o client.o

client.o: client.c server.h
	gcc -c client.c

server.o: server.c server.h
	gcc -c server.c
