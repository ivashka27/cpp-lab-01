#include "labels.hpp"
#include <cmath>
// Этот файл нужно реализовать.
// Сигнатуры в labels.hpp менять нельзя.

std::string SignLabel(int value) {
    if (value < 0) {
        return "negative";
    }
    else if (value > 0) {
        return "positive";
    }
    else return "zero";
}

std::string ParityLabel(int value) {
    if (std::abs(value) % 2 == 0) {
        return "even";
    }
    else {
        return "odd";
    }
}

std::string GradeLabel(int score) {
    if (score >=0 and score <= 59) {
        return "fail";
    }
    else if (score >= 60 and score <= 74) {
        return "pass";
    }
    else if (score >= 75 and score <= 89) {
        return "good";
    }
    else if (score >= 90 and score <= 100) {
        return "excellent";
    }
    else return "invalid";
}
