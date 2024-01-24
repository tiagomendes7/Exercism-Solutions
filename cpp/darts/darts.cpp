#include "darts.h"

namespace darts {

    int score(float x, float y)
    {
        // the circle equation with center at (0,0) is x^2 + y^2 = r^2
        double r_square{x*x + y*y};
        
        if( r_square <= 1.0*1.0 ){
            return 10;
        }else if( r_square <= 5.0*5.0 ){
            return 5;
        }else if( r_square <= 10.0*10.0){
            return 1;
        }else{
            return 0;
        }
    }
} // namespace darts