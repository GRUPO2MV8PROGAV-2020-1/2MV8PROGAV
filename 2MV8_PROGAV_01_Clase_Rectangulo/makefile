EXE:=ejemplo.exe
PRED:=pred.exe
SUMA:=sumarectangulos.exe
FUENTES1:=TestRectangulo.cpp Rectangulo.cpp
FUENTES2:=TestSumaRectangulos.cpp Rectangulo.cpp
NOREFERENCEUSINGERROR:=no_reference_use_compilation_error.exe
CXX=g++
all:$(EXE) $(PRED) $(SUMA)
$(EXE):$(FUENTES1)
	$(CXX) $^ -o $@
$(PRED):$(FUENTES1)
	$(CXX) -DCONSTRUCTOR_PRED $^ -o $@
$(SUMA):$(FUENTES2)
	$(CXX) $^ -o $@
noreferenceusingerror:$(NOREFERENCEUSINGERROR)
$(NOREFERENCEUSINGERROR):$(FUENTES2)
	$(CXX) -DNOREFERENCE_ERROR $^ -o $@
clean:
	rm -v $(EXE) $(PRED) $(SUMA)
