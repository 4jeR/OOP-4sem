CXX = g++
CXXFLAGS = -g -Wall -pedantic
OBJECTS = Main.o Book.o Page.o B5Page.o
EXE = Biblos

$(EXE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(EXE)

Main.o: Main.cpp
	$(CXX) $(CXXFLAGS) -c Main.cpp

Book.o: Book.cpp
	$(CXX) $(CXXFLAGS) -c Book.cpp

Page.o: Page.cpp
	$(CXX) $(CXXFLAGS) -c Page.cpp

B5Page.o: B5Page.cpp
	$(CXX) $(CXXFLAGS) -c B5Page.cpp

.PHONY: clean run

clean:
	rm -rf $(OBJECTS)
	rm -rf $(EXE)

run: $(EXE)
	./$(EXE)