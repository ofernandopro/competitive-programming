#ifndef TIPONO_H
#define TIPONO_H
#include "TipoItem.h"

class TipoNo
{
public:
    TipoNo();

private:
    TipoItem item;
    TipoNo *esq;
    TipoNo *dir;
    int numEncrip;

    friend class ArvoreBinaria;
};

#endif // TIPONO_H