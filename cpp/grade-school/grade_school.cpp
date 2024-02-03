#include "grade_school.h"

namespace grade_school {

    school::school(/* args */)
    {
    }
    
    school::~school()
    {
    }
    
    std::map<int, std::vector<std::string>> school::roster() const
    {
        return roster_;
    }    

    void school::add(std::string name, int grade)
    {        
        std::map<int, std::vector<std::string>>::iterator i = roster_.find(grade);
        
        if( i != roster_.end() ){
            (i->second).emplace_back(name);
            std::sort(i->second.begin(), i->second.end(), 
                [](const std::string lhs, const std::string rhs) {return lhs < rhs;});
        
        }else{
            roster_.insert({grade, std::vector<std::string>{name}});
        }
    }

    std::vector<std::string> school::grade(int grade) const
    {        
        auto i = roster_.find(grade);
        
        if( i != roster_.end() )
            return i->second;
        return {};
    }

}  // namespace grade_school
