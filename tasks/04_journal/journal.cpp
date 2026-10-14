#include "journal.hpp"
#include <cmath>
// Этот файл нужно реализовать.
// Сигнатуры в journal.hpp менять нельзя.

bool IsValidScore(int score) {
    if (score >=0 and score <= 100) {
        return true;
    }
    else return false;
}

long long AddToSum(long long sum, int score) {
    return sum + (long long) score;
}

int NextMin(bool has_score, int current_min, int score) {
    if (has_score == false) {
        return score;
    }
    else return std::min(current_min, score);
    return 0;
}

int NextMax(bool has_score, int current_max, int score) {
    if (has_score == false) {
        return score;
    }
    else return std::max(current_max, score);
    return 0;
}

int NextPassed(int passed, int score) {
    if (score >= 60) {
        return (passed+=1);
    }
    else return passed;
}

double Average(long long sum, int count) {
    return (double) sum/count;
}

std::string Verdict(int count, int passed, int min_score) {
    if (count == 0) {
        return "empty";
    }
    if (passed != count) {
        return "debt";
    }
    if (min_score >= 90) {
        return "excellent";
    }
    else return "ok";
}
