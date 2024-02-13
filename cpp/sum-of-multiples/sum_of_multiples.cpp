#include "sum_of_multiples.h"

namespace sum_of_multiples {

    int to(std::vector<int> magical_items, int level)
    {
        std::set<int> multiples;

        for(int item : magical_items)
        {
            for (int i = 1; item * i < level; i++)
                multiples.insert(item * i);
        }

        return std::accumulate(multiples.begin(), multiples.end(), 0);
    }

}  // namespace sum_of_multiples
