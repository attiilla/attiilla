#compiler
CXX := g++

#folders
HEADERF := ./sorting/header/
SRCF := ./sorting/src/
OBJF := ./sorting/obj/
BINF := ./sorting/bin/

#files
MAIN := main
TGT := run.out
SRC := $(wildcard $(SRCF)*.cpp)
OBJ := $(patsubst $(SRCF)%.cpp, $(OBJF)%.o, $(SRC))

all: output

$(OBJF)%.o: $(SRCF)%.cpp
	@$(CXX) -c $< -o $@ -I$(HEADERF)

output: $(OBJ)
	@$(CXX) -o $(BINF)$(TGT) $(OBJ)

clean:
	@rm -rf $(OBJF)*.o $(BINF)$(TGT)