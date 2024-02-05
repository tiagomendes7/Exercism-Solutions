#if !defined(HAMMING_H)
#define HAMMING_H

#include <string>
#include <algorithm>
#include <stdexcept>

namespace hamming {

    int compute(std::string seq1, std::string seq2);

}  // namespace hamming

#endif // HAMMING_H