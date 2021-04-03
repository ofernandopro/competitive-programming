CC=g++ # compilador, troque para gcc se preferir utilizar C
CFLAGS=-Wall -Wextra # compiler flags, troque o que quiser, exceto bibliotecas externas
EXEC=./bora # nome do executavel que sera gerado, nao troque
TMPOUT=bora.testresult

$(EXEC): problems/problem1017.cpp
	$(CC) $(CFLAGS) problems/problem1017.cpp -o $(EXEC)
	
test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)
