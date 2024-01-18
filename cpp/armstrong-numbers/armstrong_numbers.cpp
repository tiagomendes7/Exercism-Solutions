#include "armstrong_numbers.h"

namespace armstrong_numbers {

    int is_armstrong_number(int num)
    {
        int result {0};
        const int length = num <= 0 ? 0 : log10(num) + 1;

        for( int i {num} ; i > 0; i /= 10 )
            result += std::pow(i % 10, length);
        
        return result == num;
    }

}  // namespace armstrong_numbers
