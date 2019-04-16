CC=g++
CXXFLAGS= -g -Wall -pedantic
OBJS = Main.o Typ.o ObiektMiotajacy.o
OUT = Wyjatki

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