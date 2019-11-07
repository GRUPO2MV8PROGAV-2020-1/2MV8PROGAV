EXE:=TestShellPolinomios.exe
OBJETOS:=Directory_entry.o Pol_Directory.o Polinomio.o Rac.o ShellPolinomios.o String_Tokenizer.o 2014140069.o
CXX=g++
#CXXFLAGS+=-DDISC2014140069 

all:$(EXE)
$(EXE):$(OBJETOS) 
	$(CXX) $(CXXFLAGS) $^ -o $@
clean:
	rm -v $(OBJETOS) $(EXE)
