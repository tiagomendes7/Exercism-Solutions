#include "hamming.h"

namespace hamming {

    int compute(std::string seq1, std::string seq2)
    {
        int count = 0;
        if( seq1.length() == seq2.length() ){
            for (size_t i = 0; i < seq1.length(); i++)
                count += (seq1[i] != seq2[i]);
        }else{
            throw std::domain_error("ERROR");
        }
        return count;   
    };

}  // namespace hamming
