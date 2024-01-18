#include "atbash_cipher.h"


namespace atbash_cipher {

    // the letters 'a' through 'z' are stored together in the ascii table; we will use this fact
    // we store the ' ', 'a' and the cypher as constants;
    const std::tuple <char, char, std::string_view> arr (' ', 'a', "zyxwvutsrqponmlkjihgfedcba");
        
    std::string encode(std::string text)
    {

        std::string encoded;
        int size = 0, len = text.length();

        for( int i{0}; i < len; i++){

            // we need a space every 5 letters            
            if( size == 5 && i < len - 1 ){
                size = 0;
                encoded += std::get<0>(arr);
            }

            // if it is a digit, than add it to the string
            if( std::isdigit(text.at(i)) ){
                encoded += text.at(i);
                size++;
                continue;
            }

            // if it is not a letter, just ignore
            if( !std::isalpha(text.at(i)) ) 
                continue;      

            // When you subtract 2 chars, C++ uses the decimal representation
            // of the chars that is present in the ASCII table
            // The subtraction will give us the index in the cypher
            char lower = std::tolower(text.at(i)); // transform in lower case
            encoded   += std::get<2>(arr).at( lower - std::get<1>(arr) );
            size++;
        }

        return encoded;          
    }

        
    std::string decode(std::string text_encoded)
    {
        std::string decoded;

        for( unsigned int i{0}; i < text_encoded.length(); i++){
            // if it is a digit, than add it to the string
            if( std::isdigit(text_encoded.at(i)) ){
                decoded += text_encoded.at(i);
                continue;
            }

            // if it is not a letter, just ignore
            if( !std::isalpha(text_encoded.at(i)) ) 
                continue;          

            // When you subtract 2 chars, C++ uses the decimal representation
            // of the chars that is present in the ASCII table
            // The subtraction will give us the index in the cypher
            decoded   += std::get<2>(arr).at( text_encoded.at(i) - std::get<1>(arr) );            
        }

        return decoded;
    }     

}  // namespace atbash_cipher