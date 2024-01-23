#if !defined(BOB_H)
#define BOB_H

#include <string>
#include <algorithm>

namespace bob {

    const std::string answers[] {"Sure.", "Whoa, chill out!", "Calm down, I know what I'm doing!", "Fine. Be that way!", "Whatever."};

    bool is_question(std::string str);

    bool is_yelled(std::string str);
    
    bool is_silence(std::string str);

    std::string hey(std::string str);

}  // namespace bob

#endif // BOB_H