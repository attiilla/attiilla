all: output clean

main.o: main.cpp
	@g++ -c main.cpp

output: main.o
	@g++ main.o -o run.out
	@./run.out

clean:
	@rm -rf *.o run.out