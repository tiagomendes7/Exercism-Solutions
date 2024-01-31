#include "pop_count.h"

namespace chicken_coop {

    int positions_to_quantity(int binary_num)
    {   
        int result {};
        while(binary_num > 0){
            result += binary_num & 1;
            binary_num >>= 1;
        }
        return result;
    }

}  // namespace chicken_coop
