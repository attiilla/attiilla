#compiler
CXX := g++
FLG := -std=c++1z -Wall 

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

all: output clean

$(OBJF)%.o: $(SRCF)%.cpp
	@$(CXX) $(FLG) -c $< -o $@ -I$(HEADERF)

output: $(OBJ)
	@$(CXX) $(FLG) -o $(BINF)$(TGT) $(OBJ)
	@$(BINF)$(TGT)

clean:
	@rm -rf $(OBJF)*.o $(BINF)$(TGT)