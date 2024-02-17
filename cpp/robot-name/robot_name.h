#if !defined(ROBOT_NAME_H)
#define ROBOT_NAME_H

#include <string>
#include <random>
#include <ctime>
#include <cstdio>

namespace robot_name {

    class robot
    {
    private:
        std::string name_ {};
    public:

        robot();
        ~robot();

        std::string name() const;
        void generate_name();
        void reset();
    };
    

}  // namespace robot_name

#endif // ROBOT_NAME_H