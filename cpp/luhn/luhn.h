#if !defined(LUHN_H)
#define LUHN_H

#include <string>
#include <algorithm>
#include <iostream>

namespace luhn {

    // Given a number determine whether or not it is valid per the Luhn formula.
    bool valid( std::string str);

}  // namespace luhn

#endif // LUHN_H