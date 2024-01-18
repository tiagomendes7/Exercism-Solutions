#if !defined(ATBASH_CIPHER_H)
#define ATBASH_CIPHER_H

#include <string>
#include<tuple>
#include <algorithm>

namespace atbash_cipher {
    
    // Implementation of the atbash cipher, an ancient encryption system created in the Middle East. 
    std::string encode(std::string text);
    std::string decode(std::string text);

}  // namespace atbash_cipher

#endif // ATBASH_CIPHER_H