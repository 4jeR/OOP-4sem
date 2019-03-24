CXX = g++
CXXFLAGS = -g -Wall -pedantic
OBJECTS = Main.o 
EXE = mobile

$(EXE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(EXE)

Main.o: Main.cpp
	$(CXX) $(CXXFLAGS) -c Main.cpp

.PHONY: clean run

clean:
	rm -rf $(OBJECTS)
	rm -rf $(EXE)

run: $(EXE)
	./$(EXE)