CC=g++ # compilador, troque para gcc se preferir utilizar C
CFLAGS=-Wall -Wextra # compiler flags, troque o que quiser, exceto bibliotecas externas
EXEC=./tp3 # nome do executavel que sera gerado, nao troque
TMPOUT=tp3.testresult

$(EXEC): main.cc TipoItem.o TipoNo.o ArvoreBinaria.o
	$(CC) $(CFLAGS) main.cc TipoItem.o TipoNo.o ArvoreBinaria.o -o $(EXEC)

TipoItem.o: headers/TipoItem.cpp
	$(CC) $(CFLAGS) -c headers/TipoItem.cpp -o TipoItem.o

TipoNo.o: headers/TipoNo.cpp
	$(CC) $(CFLAGS) -c headers/TipoNo.cpp -o TipoNo.o

ArvoreBinaria.o: headers/ArvoreBinaria.cpp
	$(CC) $(CFLAGS) -c headers/ArvoreBinaria.cpp -o ArvoreBinaria.o

test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean: # remove todos os arquivos temporarios que forem gerados pela compilacao
	rm -rf TipoItem.o
	rm -rf TipoNo.o
	rm -rf ArvoreBinaria.o
