#if !defined(DIFFERENCE_OF_SQUARES_H)
#define DIFFERENCE_OF_SQUARES_H

namespace difference_of_squares {
    
    // formulae found at
    // https://learnersbucket.com/examples/algorithms/difference-between-square-of-sum-of-numbers-and-sum-of-square-of-numbers/
    int sum_of_squares(int n);

    // The square of a sum is equal to the sum of the squares of 
    // all the summands plus the sum of all the double products of the summands in twos
    int square_of_sum(int n);
    
    // Difference between the square of the sum and the sum of the squares of the first n natural numbers
    int difference(int n);

}  // namespace difference_of_squares

#endif // DIFFERENCE_OF_SQUARES_H