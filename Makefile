all: add.o sub.o mul.o div.o main.o
	gcc add.o sub.o mul.o div.o main.o
	
add.o : add.c
	gcc -c add.c
	
sub.o : sub.c
	gcc -c sub.c
	
mul.o : mul.c
	gcc -c mul.c
	
div.o : div.c
	gcc -c div.c
	
clean: 
	rm add.o sub.o mul.o div.o main.o
