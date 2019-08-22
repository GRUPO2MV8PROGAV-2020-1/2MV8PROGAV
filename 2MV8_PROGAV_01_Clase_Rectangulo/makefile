EXE:=ejemplo.exe
OBJETOS:=TestRectangulo.o Rectangulo.o
CXX=g++

all:$(EXE)
$(EXE):$(OBJETOS)
	$(CXX) $^ -o $@

clean:
	rm -v $(OBJETOS) $(EXE)

