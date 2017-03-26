#include <string>

namespace shmemdss
{
    struct trienode
    {
        int data[256];
    }
    class strset
    {
        int size;
        int last;
        trienode* head;
        bool has(std::string);
        bool insert(std::string);
    }
}
