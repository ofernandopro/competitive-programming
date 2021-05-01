CC=g++
CFLAGS=-Wall -Wextra
EXEC=./tp02
TMPOUT=tp02.testresult

$(EXEC): main.cpp Grafo.o 
	$(CC) $(CFLAGS) main.cpp Grafo.o  -o $(EXEC)

Grafo.o: headers/Grafo.cpp
	$(CC) $(CFLAGS) -c headers/Grafo.cpp -o Grafo.o

test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean: # remove todos os arquivos temporarios que forem gerados pela compilacao
	rm -rf Grafo.o