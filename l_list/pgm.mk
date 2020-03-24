a.out: main.o linked_list.o
	gcc main.o linked_list.o

linked_list.o: linked_list.c l_l.h
	gcc -c linked_list.c

main.o: main.c l_l.h
	gcc -c main.c