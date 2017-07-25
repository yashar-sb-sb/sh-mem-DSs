#ifndef TRIE_TEMPLATE
#define TRIE_TEMPLATE
#include <string>

namespace shmemdss
{
    template<typename T>
    struct trienode
    {
        bool has = false;
        T data;
        int next[256];
    };

    template<typename T>
    class strtrie
    {
        int &size;
        int &nextInd;
        trienode<T>* head;
        strtrie(trienode<T> *);
    public:
        strtrie();
        strtrie(trienode<T> *, int); //clean
        bool has(std::string);
        void set(std::string, T &);
        T get(std::string);
        int insert(std::string);
        int remove(std::string);
    };
}
#include "trie.cpp"
#endif /* ifndef TRIE_TEMPLATE */
