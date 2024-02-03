#include "high_scores.h"

#include <algorithm>

namespace arcade {

    std::vector<int> HighScores::list_scores() {
        // Return all scores for this session.
        return scores;
    }

    int HighScores::latest_score() {
        // Return the latest score for this session.
        return scores.back();
    }

    int HighScores::personal_best() {
        // Return the highest score for this session.
        return *std::max_element(scores.begin(), scores.end());
    }

    std::vector<int> HighScores::top_three() {
        // Return the top 3 scores for this session in descending order.
        auto work = scores;        
        std::sort(work.begin(), work.end(), std::greater<int>());
        return { work.begin(), work.begin() + std::min((int)work.size(), 3)};
    }

}  // namespace arcade
