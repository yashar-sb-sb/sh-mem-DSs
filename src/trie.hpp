#include <string>

namespace shmemdss
{
    struct trienode
    {
        bool has = false;
        int next[256];
    };

    class strtrie
    {
        int &size;
        int &nextInd;
        trienode* head;
        strtrie(trienode *);
    public:
        strtrie();
        strtrie(trienode *, int); //clean
        bool has(std::string);
        int insert(std::string);
        int remove(std::string);
    };
}
