EXE1:=test_herencia.exe
EXE2:=test_polimorfismo.exe
#SUMA:=sumarectangulos.exe
EXE3:=test_static_method.exe
FUENTES1:=TestHerencia.cpp Circulo.cpp FiguraGeometrica.cpp Rectangulo.cpp 
FUENTES2:=TestPolimorfismo.cpp Circulo.cpp FiguraGeometrica.cpp Rectangulo.cpp
NOREFERENCEUSINGERROR:=no_reference_use_compilation_error.exe
CXX=g++
all:$(EXE1) $(EXE2) $(EXE3)
$(EXE1):$(FUENTES1)
	$(CXX) -DCONSTRUCTOR_PRED $^ -o $@
$(EXE2):$(FUENTES2)
	$(CXX) -DCONSTRUCTOR_PRED $^ -o $@
noreferenceusingerror:$(NOREFERENCEUSINGERROR)
$(NOREFERENCEUSINGERROR):$(FUENTES2)
	$(CXX) -DNOREFERENCE_ERROR $^ -o $@
$(EXE3):Test_static_method.cpp Rectangulo.cpp FiguraGeometrica.cpp
	$(CXX) $^ -o $@
clean:
	rm -v $(EXE1) $(EXE2)


