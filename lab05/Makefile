CC=g++
CXXFLAGS= -g -Wall -pedantic
OBJS = Main.o Car.o Engine.o Mercedes.o Ford.o GPS.o
OUT = mobile4

$(OUT): $(OBJS)
	$(CC)  -o $@  $^ $(CXXFLAGS)
	
.c.o:
	$(CC) -c -o $@ $< $(CXXFLAGS) 
	
.PHONY: clean run

clean:
	rm -f *o
	rm -f $(OUT)
	clear
	
run:
	./$(OUT)