#include "bob.h"

namespace bob {


    bool is_question(std::string str)
    {
        return str.back() == '?';
    }

    bool is_yelled(std::string str)
    {
        // If "str" is all UPPERCASE
        if( std::find_if(str.begin(), str.end(), [](char c) { return std::isalpha(c); }) != str.end() &&
            std::all_of(str.begin(), str.end(), [](unsigned char c){ return !std::isalpha(c) || (std::isalpha(c) && std::isupper(c)); }) )
            
            return true;
        
        return false;
    }

    bool is_silence(std::string str)
    {
        // If "str" is SILENCE
        if( str.empty() || std::all_of(str.begin(), str.end(), [](unsigned char c){ return std::isspace(c); }) )
            return true;
        
        return false;
    }

    std::string hey(std::string str)
    {
        // Erase all spaces from "str"
        str.erase(std::remove_if(str.begin(), str.end(), ::isspace), str.end());
        
        if( !is_yelled(str) && is_question(str) )
            return answers[0];

        else if( is_yelled(str) && !is_question(str) )
            return answers[1];

        else if( is_yelled(str) && is_question(str) )
            return answers[2];                  

        else if( is_silence(str) )
            return answers[3];

        else // Anything else        
            return answers[4];
    }

}  // namespace bob
