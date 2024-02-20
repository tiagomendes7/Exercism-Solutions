#include "binary.h"

namespace binary {

    int convert(std::string str)
    {
        int decimal {0};

        for(std::size_t i {}; i < str.size(); i++){
            if( str[i] < '0' || str[i] > '1' ) return 0;
            decimal += (str[str.size() - i - 1] - '0') << i;
        }

        return decimal;
    }

}  // namespace binary
