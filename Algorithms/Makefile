#compiler
CXX := g++

#files
OBJ := main.o
TGT := run.out

#folders
HEADERF := ./sorting/header/
SRCF := ./sorting/src/
OBJF := ./sorting/obj/
TGTF := ./sorting/bin/


all: output clean

%.o: %.cpp
	@$(CXX) -c $<

output: $(OBJ)
	@$(CXX) -o $(TGTF)$(TGT) *.o
	@$(TGTF)$(TGT)

clean:
	@rm -rf *.o $(TGTF)$(TGT)