CC=g++ # compilador, troque para gcc se preferir utilizar C
CFLAGS=-Wall -Wextra # compiler flags, troque o que quiser, exceto bibliotecas externas
EXEC=./tp01 # nome do executavel que sera gerado, nao troque
TMPOUT=tp01.testresult

$(EXEC): main.cpp
	$(CC) $(CFLAGS) main.cpp -o $(EXEC)
	
test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)
