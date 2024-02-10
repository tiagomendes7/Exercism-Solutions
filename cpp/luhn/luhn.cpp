#include "luhn.h"

namespace luhn {

    // Given a number determine whether or not it is valid per the Luhn formula.
    bool valid( std::string str){
        
        std::string aux = str;
        int result = 0, num = 0, j = 0;

        // Spaces are allowed in the input, but they should be stripped before checking. 
        aux.erase(std::remove(aux.begin(), aux.end(), ' '), aux.end());

        // Strings of length 1 or less are not valid.
        // All other non-digit characters are disallowed.
        if( aux.size() < 2 || aux.find_first_not_of("0123456789") != std::string::npos )  return false;
        
        //
        for(int i = aux.size() - 1;  i >= 0; i = i - 1){
            if( j == 1){
                num = (aux[i] - '0') * 2;    
                result += num - ((num > 9) * 9); 
                j = 0;
            }else{
                result += aux[i] - '0';
                j = 1;
            }
        }

        if( result % 10 == 0 ) return true;
        return false;
    }
}  // namespace luhn
