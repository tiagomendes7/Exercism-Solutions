#if !defined(DOCTOR_DATA_H)
#define DOCTOR_DATA_H

#include <string>



namespace star_map {

    enum System{
        BetaHydri = 0,
        Sol,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };

};  // namespace star_map

namespace heaven {
    
        class Vessel
        {
            private:
                std::string name {};
               
            public:
                int generation {};
                enum star_map::System current_system {};
                int busters = 0;

                Vessel(std::string name, int num, enum star_map::System current_system = star_map::System::Sol);
                ~Vessel();

                std::string get_name();

                Vessel replicate(std::string name);
                
                void make_buster();
                bool shoot_buster();
                
        };
    
        std::string get_older_bob(Vessel bob, Vessel marv);
        bool in_the_same_system(Vessel bob, Vessel marv);

};  // namespace heaven



#endif // DOCTOR_DATA_H