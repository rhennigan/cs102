list.o: src/list.c lib/list.h
	cc -c -g src/list.c

deque.o: src/deque.c lib/deque.h list.o
	cc -c -g src/deque.c

queue.o: src/queue.c lib/queue.h deque.o
	cc -c -g src/queue.c

queue_test: src/queue_test.c queue.o
	cc -o queue_test -g src/queue_test.c queue.o deque.o list.o

airport: src/airport.c queue.o list.o user_input.o
	cc -o airport -g src/airport.c queue.o list.o user_input.o

user_input.o: src/user_input.c lib/user_input.h
	cc -c -g src/user_input.c

clean:
	rm *.o
