#if !defined(ALLERGIES_H)
#define ALLERGIES_H

#include <string>
#include <array>
#include <unordered_set>

namespace allergies {


    class allergy_test
    {
    private:
        int scr = 0;

    public:
        const int ALLERGIES_COUNT = 8;
        std::unordered_set<std::string> no_allergies{};
        std::array<std::string, 8> score_allergie      {{"eggs",     "peanuts",   "shellfish", "strawberries", 
                                                         "tomatoes", "chocolate", "pollen",    "cats" }};

        allergy_test(int scr);
        ~allergy_test();

        bool is_allergic_to(std::string str);
        std::unordered_set<std::string> get_allergies();
    };
    

}  // namespace allergies

#endif // ALLERGIES_H