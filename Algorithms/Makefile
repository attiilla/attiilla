CXX := g++

all: output clean

%.o: %.cpp
	@CXX -c $<

output: main.o
	@CXX -o run.out *.o
	@./run.out

clean:
	@rm -rf *.o run.out