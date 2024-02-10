#include <array>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) 
{   
    std::vector<int> stds_scores_ints {};
    for(int i {0}; i < student_scores.size(); i++)
        stds_scores_ints.insert(stds_scores_ints.end(), student_scores.at(i) );

    return stds_scores_ints;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) 
{
    return std::count_if(student_scores.begin(), student_scores.end(), [](int x) { return x <= 40;});
}

// Determine how many of the provided student scores were 'the best' based on the provided threshold.
std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) {
    std::vector<int> best_stds {};
    std::for_each(student_scores.begin(), student_scores.end(), 
                [&best_stds, threshold](int x) { if(x >= threshold) best_stds.insert(best_stds.end(), x);  } );
    return best_stds;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) 
{   
    const double diff = (highest_score - 41 + 1) / 4;
    std::array<int, 4> scores;

    std::for_each(scores.begin(), scores.end(), 
                  [=, i=0](auto& min) mutable { min = 41 + i * diff; i++; });
    
    return scores;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<std::string> names_scores {};    
    assert(size(student_scores) == size(student_names));
    
    for (unsigned i = 0; i < student_scores.size(); i++)
        names_scores.insert(names_scores.end(), std::to_string(i+1) + ". " + student_names.at(i) + ": " + std::to_string(student_scores.at(i)) );
    
    return names_scores;
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    assert(size(student_scores) == size(student_names));

    for(unsigned i = 0; i < student_scores.size(); i++)
        if( student_scores.at(i) == 100 ) return student_names.at(i);

    return "";
}
