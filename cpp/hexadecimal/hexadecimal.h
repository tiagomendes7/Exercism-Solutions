#if !defined(HEXADECIMAL_H)
#define HEXADECIMAL_H

#include <string>
#include <cmath>

namespace hexadecimal {

    // Convert a hexadecimal number, represented as a string (e.g. "10af8c"), 
    // to its decimal equivalent using first principles
    int convert( std::string hex );

}  // namespace hexadecimal

#endif // HEXADECIMAL_H