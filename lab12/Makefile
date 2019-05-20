CC=g++
CXXFLAGS= -g -Wall -pedantic
OBJS = Main.o
OUT = Matrix

$(OUT): $(OBJS)
	$(CC)  -o $@  $^ $(CXXFLAGS)
	
.c.o:
	$(CC) -c -o $@ $< $(CXXFLAGS) 
	
.PHONY: clean run

clean:
	rm -f *o
	rm -f $(OUT)
	clear

memcheck: $(OUT)
	valgrind --leak-check -v ./$(OUT)	

run:
	./$(OUT)
