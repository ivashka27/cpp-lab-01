#include "journal.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в journal.hpp менять нельзя.

bool IsValidScore(int score) {
    return (bool)(0 <= score && score <= 100);
}

long long AddToSum(long long sum, int score) {
    return (long long)(sum+score);
}

int NextMin(bool has_score, int current_min, int score) {
    if (!(has_score)) {
        return score;
    } else {
        return (score < current_min) ? (score) : (current_min);
    }
}

int NextMax(bool has_score, int current_max, int score) {
    if (!(has_score)) {
        return score;
    } else {
        return (score > current_max) ? (score) : (current_max);
    }
}

int NextPassed(int passed, int score) {
    if (score >= 60) {
        return passed+1;
    } else{
        return passed;
    }
}

double Average(long long sum, int count) {
    return 1.0*sum/count;
}

std::string Verdict(int count, int passed, int min_score) {
    if (count == 0){
        return "empty";
    } else if (count != passed) {
        return "debt";
    } else if (min_score >= 90) {
        return "excellent";
    } else {
        return "ok";
    }
}
