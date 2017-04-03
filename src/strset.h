#include <string>

namespace shmemdss
{
    struct trienode
    {
        std::pair<int,bool> next[256];
    };

    class strset
    {
        int &size;
        int &nextInd;
        trienode* head;
        strset(trienode *);
    public:
        strset();
        strset(trienode *, int); //clean
        int has(std::string);
        int insert(std::string);
        int remove(std::string);
    };
}
