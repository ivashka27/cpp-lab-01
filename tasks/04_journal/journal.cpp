#include "journal.hpp"


bool IsValidScore(int score) {
    if (0<=score && score <=100)
    {
        return true;
    }
    return false;
}

long long AddToSum(long long sum, int score) {
    sum = sum + score;
    return sum;
}

int NextMin(bool has_score, int current_min, int score) {
    if (has_score==false){
        return score;
    } else if (current_min>score)
    {
        return score;
    }
    return current_min;
}

int NextMax(bool has_score, int current_max, int score) {
    if (has_score==false){
        return score;
    } else if (current_max<score)
    {
        return score;
    }
    return current_max;
}

int NextPassed(int passed, int score) {
    if (score>=60)
    {
        passed++;
    }
    return passed;
}

double Average(long long sum, int count) {
    return static_cast<double>(sum)/count;
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

