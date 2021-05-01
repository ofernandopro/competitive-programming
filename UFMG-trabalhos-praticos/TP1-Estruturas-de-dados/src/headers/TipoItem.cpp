#include "TipoItem.h"
#include <iostream>

TipoItem::TipoItem()
{
    chave = -1;
}
TipoItem::TipoItem(TipoChave c)
{
    chave = c;
}
void TipoItem::SetChave(TipoChave c)
{
    chave = c;
}
TipoChave TipoItem::GetChave()
{
    return chave;
}
void TipoItem::Imprime()
{
    printf("%d ", chave);
}