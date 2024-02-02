#include "hexadecimal.h"

namespace hexadecimal {
    
    //
    int convert( std::string hex ){

        int result = 0;

        if( hex.find_first_not_of("0123456789abcdef") != std::string::npos ) 
            return 0;

        for ( auto ch : hex ){
            if( std::isdigit( ch ) )
                result = (ch - '0') + (result * 16);
            else
                result = (ch - 'a' + 10) + (result * 16);            
        }

        return result;
    }


}  // namespace hexadecimal
