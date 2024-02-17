#if !defined(ROBOT_NAME_H)
#define ROBOT_NAME_H

#include <string>
#include <random>
#include <ctime>
#include <cstdio>
#include <unordered_set>

namespace robot_name {

    class robot
    {
    private:
        std::string name_ {};
        std::unordered_set<std::string> names = {""};

    public:

        robot();
        ~robot();

        std::string name() const;
        std::string generate_name();
        void reset();
    };
    

}  // namespace robot_name

#endif // ROBOT_NAME_H