CC=g++ # compilador, troque para gcc se preferir utilizar C
CFLAGS=-Wall -Wextra # compiler flags, troque o que quiser, exceto bibliotecas externas
EXEC=./run # nome do executavel que sera gerado, nao troque
TMPOUT=run.testresult

$(EXEC): replaceElements.cpp
	$(CC) $(CFLAGS) replaceElements.cpp -o $(EXEC)
	
test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)
