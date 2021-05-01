#include <cstdlib>
#include "TipoNo.h"

TipoNo::TipoNo()
{
    item.SetChave("vazio");
    esq = NULL;
    dir = NULL;
    numEncrip = -1;
}