#include "strset.h"


shmemdss::strset::strset(trienode* node)
    : size(node->next[0]), nextInd(node->next[1]), head(node+1)
{}


//clean
shmemdss::strset::strset(trienode* node, int Size)
    : strset(node)
{
    size = Size;
    nextInd = 2;
}


int shmemdss::strset::insert(std::string str)
{
    int cur = 0;
    for(char i:str)
    {
        if(!head[cur].next[int(i)])
        {
            head[cur].next[int(i)] = nextInd++;
        }
        cur = head[cur].next[int(i)];
    }
    head[cur].has = true;
    return 0;
}


bool shmemdss::strset::has(std::string str)
{
    int cur = 0;
    for(char i:str)
    {
        if(!head[cur].next[int(i)])
            return false;
        cur = head[cur].next[int(i)];
    }
    return head[cur].has;
}



int shmemdss::strset::remove(std::string str)
{
    int cur = 0;
    for(char i:str)
    {
        if(!head[cur].next[int(i)])
            return 1; //it does not exits in the trie.
        cur = head[cur].next[int(i)];
    }
    if(head[cur].has)
    {
        head[cur].has = false;
        return 0;
    }
    return 1; //it does not exits in the trie.
}
