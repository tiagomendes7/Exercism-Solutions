#include "difference_of_squares.h"

namespace difference_of_squares {

    // formulae found at
    // https://learnersbucket.com/examples/algorithms/difference-between-square-of-sum-of-numbers-and-sum-of-square-of-numbers/
    int sum_of_squares(int n){
        return ( (n * (n + 1) * (2*n + 1)) / 6);
    }

    // The square of a sum is equal to the sum of the squares of 
    // all the summands plus the sum of all the double products of the summands in twos
    int square_of_sum(int n){
        return ((n * (n + 1)) / 2) * ((n * (n + 1)) / 2);
    }

    //
    int difference(int n){
        return square_of_sum(n) - sum_of_squares(n);
    }

}  // namespace difference_of_squares
