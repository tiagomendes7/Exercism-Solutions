#include "robot_name.h"

namespace robot_name {

    robot::robot()
    {      
        name_ = generate_name();
    }
    
    robot::~robot()
    {
    }
    
    std::string robot::generate_name()
    {
        // Seed the random number generator with the current time
        std::mt19937 rng(std::random_device{}());

        // Define the distribution for uppercase letters (ASCII values)
        std::uniform_int_distribution<int> letters_dist('A', 'Z');
        std::uniform_int_distribution<int> numbers_dist(0, 9);

        // The name must start as an empty string
        std::string name_aux {};

        // Generate two random uppercase letters
        name_aux.append(1, static_cast<char>( letters_dist(rng)) );
        name_aux.append(1, static_cast<char>( letters_dist(rng)) );

        // Generate three random digits
        name_aux += std::to_string(numbers_dist(rng));
        name_aux += std::to_string(numbers_dist(rng));
        name_aux += std::to_string(numbers_dist(rng));

        return name_aux; 
    }
    
    std::string robot::name() const
    {
        return name_;
    }

    void robot::reset()
    {
        name_ = generate_name();

        while( names.count(name_) != 0 )
            name_ = generate_name();
        
        names.insert(name_);
    }

}  // namespace robot_name
 