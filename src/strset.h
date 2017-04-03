#include <string>

namespace shmemdss
{
    struct trienode
    {
        bool has = false;
        int next[256];
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
        bool has(std::string);
        int insert(std::string);
        int remove(std::string);
    };
}
