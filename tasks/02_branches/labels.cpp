#include "labels.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в labels.hpp менять нельзя.

std::string SignLabel(int value) {
    if (value < 0) return "negative";
    if (value > 0) return "positive";
    return "zero";
}

std::string ParityLabel(int value) {
    if (value % 2 == 0) return "even";
    return "odd";
}

std::string GradeLabel(int score) {
    if (score >= 0 && score <= 59) return "fail";
    if (score >= 60 && score < 75) return "pass";
    if (score >= 75 && score < 90) return "good";
    if (score >= 90 && score < 101) return "excellent";
    return "invalid";
}
