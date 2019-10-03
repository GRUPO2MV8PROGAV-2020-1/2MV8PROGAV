EXE:=pp.exe
FUENTE:=parametric_polymorphism.c
PRE:=parametric_polymorphism.prep
CXX=g++
all:$(PRE) $(EXE)
$(PRE):$(FUENTE)
	$(CXX) -DPREP -E $^ -o $(PRE)
$(EXE):$(FUENTE)
	$(CXX) $^ -o $(EXE)
clean:
	rm -v $(PRE) $(EXE)
