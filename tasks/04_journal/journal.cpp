#include "journal.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в journal.hpp менять нельзя.

bool IsValidScore(int score) {
    return score >= 0 && score <= 100;
}

long long AddToSum(long long sum, int score) {
    sum += score;
    return sum;
}

int NextMin(bool has_score, int current_min, int score) {
    if (!has_score) {
        return score;
    }
    else {
        if (score < current_min) {
            return score;
        }
        else {
            return current_min;
        }
    }
}

int NextMax(bool has_score, int current_max, int score) {
    if (!has_score) {
        return score;
    }
    else {
        if (score > current_max) {
            return score;
        }
        else {
            return current_max;
        }
    }
}

int NextPassed(int passed, int score) {
    if (score >= 60) {
        passed++;
    }
    return passed;
}

double Average(long long sum, int count) {
    
    return static_cast<double>(sum) / count;
}

std::string Verdict(int count, int passed, int min_score) {
    if (count == 0) {
        return "empty";
    }
    else if (passed != count) {
        return "debt";
    }
    else if (min_score >= 90) {
        return "excellent";
    }
    else {
        return "ok";
    }
}
