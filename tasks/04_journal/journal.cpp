#include "journal.hpp"
#include <iostream>
#include <algorithm>
using namespace std;
// Этот файл нужно реализовать.
// Сигнатуры в journal.hpp менять нельзя.

bool IsValidScore(int score) {
    if(score>=0&&score<=100)
    return true;
    else
    return false;
}

long long AddToSum(long long sum, int score) {
    sum=sum+score;
    return sum;
}

int NextMin(bool has_score, int current_min, int score) {
    if(has_score){
        if(score<current_min)
        return score;
        else
        return current_min;
    }
    else
    return score;
}

int NextMax(bool has_score, int current_max, int score) {
   if(has_score){
    if(score>current_max)
    return score;
    else
    return current_max;
   }
   else
    return score;
}

int NextPassed(int passed, int score) {
   if(score>=60)
   passed=passed+1;
    return passed;
}

double Average(long long sum, int count) {
    double x = sum;
    double y = count;
    double z = x/y;
    return z;
}

std::string Verdict(int count, int passed, int min_score) {
    if(count == 0)
    return "empty";
    if(passed!=count)
    return "debt";
    if(min_score>=90)
    return "excellent";
    else
    return "ok";
}