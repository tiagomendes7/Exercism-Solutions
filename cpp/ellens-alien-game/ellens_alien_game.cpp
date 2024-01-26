namespace targets {
// TODO: Insert the code for the alien class here
    class Alien
    {
    private:
        int health {3};

    public:
        int x_coordinate;
        int y_coordinate;

        Alien(int x, int y) :
            x_coordinate {x}, 
            y_coordinate {y}
        { };

        ~Alien(){};
        
        // Read the health information
        int get_health(){
            return health;
        }

        // Method that decrements the health of an alien object by 1
        bool hit(){
                health = health > 0 ? health - 1 : 0;
                return true;
            
        }

        // Check if the alien is... well... alive
        bool is_alive(){
            return health > 0;
        }
    
        // Method that takes x_new and y_new values, and changes the alien's coordinates accordingly.
        bool teleport(int x_new, int y_new){
            x_coordinate = x_new;
            y_coordinate = y_new;
            return true;
        }

        // Check if two aliens occupy the same coordinates.
        bool collision_detection(Alien ali){
            return (x_coordinate == ali.x_coordinate) && (y_coordinate == ali.y_coordinate);
        }

    };
    
    
    
}  // namespace targets