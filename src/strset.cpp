#include "strset.h"


shmemdss::strset::strset(trienode* node)
    : size(node->next[0].first), nextInd(node->next[1].first), head(node+1)
{}


//clean
shmemdss::strset::strset(trienode* node, int Size)
    : strset(node)
{
    size = Size;
    nextInd = 2;
}
