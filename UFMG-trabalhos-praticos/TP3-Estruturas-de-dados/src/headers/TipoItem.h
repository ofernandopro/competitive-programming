#ifndef TIPOITEM_H
#define TIPOITEM_H
#include <string>

typedef std::string TipoChave; // TipoChave facilita eventuais modificações e aumenta a modularização do código (é um "apelido" para o tipo char)

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