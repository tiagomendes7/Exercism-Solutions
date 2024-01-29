#include "doctor_data.h"


namespace heaven {

        Vessel::Vessel(std::string name, int generation, star_map::System current_system)
        {
            this->name = name;
            this->generation = generation;
            this->current_system = current_system;
        }
        
        Vessel::~Vessel()
        {

        }

        std::string Vessel::get_name()
        {
            return name;
        }
                
        Vessel Vessel::replicate(std::string name)
        {
            return Vessel {name, this->generation + 1, this->current_system};
        }

        void Vessel::make_buster()
        {
            this->busters++;
        }

        bool Vessel::shoot_buster()
        {
            if( this->busters > 0 ){
                this->busters--;
                return true;
            }

            return false;
        }

        std::string get_older_bob(Vessel bob, Vessel marv)
        {
            if( bob.generation < marv.generation )
                return bob.get_name();
            
            return marv.get_name();
        }

        bool in_the_same_system(Vessel bob, Vessel marv)
        {
            return bob.current_system == marv.current_system;
        }

}  // namespace heaven
