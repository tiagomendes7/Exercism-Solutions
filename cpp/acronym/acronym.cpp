#include "acronym.h"

namespace acronym {

    std::string acronym(std::string str)
    {
        std::string result {};
        int del = 1;

        // An apostrophe does not begin or end a word
        // At the begining there is always a letter
        // The letter right after the delimiter is added to result 
        for( auto c : str ){
            if( c == '-' || c == ' ' || c == '_') del = 1;
            else if( del ){
                result += std::toupper(c);
                del = 0;
            }
        }
        return result;
    }

}  // namespace acronym
