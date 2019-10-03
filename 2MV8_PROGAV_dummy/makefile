EXE:=test_vector.exe
all:$(EXE)
CXX=g++
CXXFLAGS +=-I../include
$(EXE):../2MV8_PROGAV_03_plantilla_vector/utileria.o TestVector.o
	$(CXX) $^ -o $@
clean:
	rm -v $(EXE) *.o

