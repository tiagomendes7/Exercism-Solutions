#include "allergies.h"

namespace allergies {


allergy_test::allergy_test(int scr_num) 
: scr {scr_num}
{
    for (int i {0}; i < ALLERGIES_COUNT; i++)
        if( scr & (1 << i) ) no_allergies.insert(score_allergie[i]);
    
}
    

allergy_test::~allergy_test(){};

// is_allergic_to function to check if person is allergic 
// to product represented by "str"
bool allergy_test::is_allergic_to(std::string str){

    return no_allergies.find(str) != no_allergies.end();
}

// allergy_test function to check all the products
// a person is allergic to 
std::unordered_set<std::string> allergy_test::get_allergies(){

    return no_allergies;
}

}  // namespace allergies
