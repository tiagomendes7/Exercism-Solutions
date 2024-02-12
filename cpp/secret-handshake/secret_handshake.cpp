#include "secret_handshake.h"


namespace secret_handshake {

    const std::vector<std::string> vec {"wink", "double blink", "close your eyes", "jump"};

    std::vector<std::string> commands(int num)
    {
        std::vector<std::string> result {};
        
        if (num & 1)
            result.push_back(vec[0]);
            
        if( (num >> 1) & 1)
            result.push_back(vec[1]);

        if( (num >> 2) & 1)
            result.push_back(vec[2]);
            
        if( (num >> 3) & 1)
            result.push_back(vec[3]);
            
        if( (num >> 4) & 1)
            return std::vector<std::string> (result.rbegin(), result.rend());
        
        return result;
    }

}  // namespace secret_handshake
