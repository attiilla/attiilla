CXX	:= g++
OBJ := main.o
TGT := run.out

all: output clean

%.o: %.cpp
	@$(CXX) -c $<

output: $(OBJ)
	@$(CXX) -o $(TGT) *.o
	@./$(TGT)

clean:
	@rm -rf *.o $(TGT)