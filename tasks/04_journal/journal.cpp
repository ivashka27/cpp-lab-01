#include "journal.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в journal.hpp менять нельзя.

bool IsValidScore(int score) {
    if(score>=0 and score<=100) return true;
    else return false;
}

long long AddToSum(long long sum, int score) {
    sum = sum + score;
    return sum;
}

int NextMin(bool has_score, int current_min, int score) {
    if(has_score == false){
        current_min = score;
        has_score = true;
        return current_min;
    }
    else{
        if(score<current_min) current_min = score;
        return current_min;
    }
}

int NextMax(bool has_score, int current_max, int score) {
    if(has_score == false){
        current_max = score;
        has_score = true;
        return current_max;
    }
    else{
        if(score>current_max) current_max = score;
        return current_max;
    }
}

int NextPassed(int passed, int score) {
    if(score>=60) passed++;
    return passed;
}

double Average(long long sum, int count) {
    double sum1 = sum;
    return sum1/count;
}

std::string Verdict(int count, int passed, int min_score) {
    if(count == 0) return "empty";
    if(passed!=count) return "debt";
    if(min_score>=90) return "excellent";
    return "ok";
}
