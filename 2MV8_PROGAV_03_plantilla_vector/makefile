EXE:=test_vector.exe
all:$(EXE)
CXX=g++
$(EXE):utileria.o TestVector.o
	$(CXX) $^ -o $@
clean:
	rm -v $(EXE) *.o

