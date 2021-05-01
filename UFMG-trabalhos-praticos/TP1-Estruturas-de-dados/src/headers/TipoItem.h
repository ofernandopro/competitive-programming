#ifndef TIPOITEM_H
#define TIPOITEM_H

typedef int TipoChave; // TipoChave facilita eventuais modificações e aumenta a modularização do código (é um "apelido" para o nosso tipo inteiro)

class TipoItem
{
public:
    TipoItem();
    TipoItem(TipoChave c);
    void SetChave(TipoChave c);
    TipoChave GetChave();
    void Imprime();

private:
    TipoChave chave; // É o identificador único de um item
};

#endif // TIPOITEM_H