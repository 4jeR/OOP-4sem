CC=g++
CXXFLAGS= -g -Wall -pedantic
OBJS = Main.o Car.o Engine.o Mercedes.o Ford.o GPS.o Haversine.o 
OUT = mobile

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