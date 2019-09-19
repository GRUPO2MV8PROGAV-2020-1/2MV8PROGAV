EXE:=TestShellPolinomios.exe
OBJETOS:=Directory_entry.o Pol_Directory.o Polinomio.o Rac.o ShellPolinomios.o String_Tokenizer.o
CXX=g++

all:$(EXE)
$(EXE):$(OBJETOS) 
	$(CXX) $^ -o $@
clean:
	rm -v $(OBJETOS) $(EXE)
