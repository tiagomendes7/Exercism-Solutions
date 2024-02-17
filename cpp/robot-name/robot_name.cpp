#include "robot_name.h"

namespace robot_name {

    robot::robot()
    {      
        generate_name();
    }
    
    robot::~robot()
    {
    }
    
    void robot::generate_name()
    {
        // Seed the random number generator with the current time
        std::mt19937 rng(std::random_device{}());

        // Define the distribution for uppercase letters (ASCII values)
        std::uniform_int_distribution<int> letters_dist('A', 'Z');
        std::uniform_int_distribution<int> numbers_dist(0, 9);

        // Reset the name
        name_ = "";
        
        // Generate two random uppercase letters
        name_.append(1, static_cast<char>( letters_dist(rng)) );
        name_.append(1, static_cast<char>( letters_dist(rng)) );

        // Generate three random digits
        name_ += std::to_string(numbers_dist(rng));
        name_ += std::to_string(numbers_dist(rng));
        name_ += std::to_string(numbers_dist(rng));
    }
    
    std::string robot::name() const
    {
        return name_;
    }

    void robot::reset()
    {
        generate_name();    
    }

}  // namespace robot_name
