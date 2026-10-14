#include "journal.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в journal.hpp менять нельзя.

bool IsValidScore(int score) {
    (void)score;
    return 0 <= score and score <= 100;
}

long long AddToSum(long long sum, int score) {
    (void)sum;
    (void)score;
    long long score1 = score;
    return sum + score1;
}

int NextMin(bool has_score, int current_min, int score) {
    (void)has_score;
    (void)current_min;
    (void)score;
    if (has_score == false) {
        return score;
    } else {
        if (score < current_min or current_min == 0) return score;
        else return current_min;
    }
}

int NextMax(bool has_score, int current_max, int score) {
    (void)has_score;
    (void)current_max;
    (void)score;
    if (has_score == false) {
        return score;
    } else {
        if (score > current_max or current_max == 0) return score;
        else return current_max;
    }
}

int NextPassed(int passed, int score) {
    (void)passed;
    (void)score;
    if (score >= 60) return ++passed;
    else return passed;
}

double Average(long long sum, int count) {
    (void)sum;
    (void)count;
    return (double) sum / count;
}

std::string Verdict(int count, int passed, int min_score) {
    (void)count;
    (void)passed;
    (void)min_score;
    if (count == 0) {
        return "empty";
    } else {
        if (passed != count) {
            return "debt";
        } else {
            if (min_score >= 90) return "excellent";
            else return "ok";
        }
    }
}
