#include "labels.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в labels.hpp менять нельзя.

std::string SignLabel(int value) {
    //(void)value;
    if (value < 0) return "negative";
    if (value > 0) return "positive";
    return "zero";
}

std::string ParityLabel(int value) {
    //(void)value;
    if (value % 2 == 0) return "even";
    return "odd";
}

std::string GradeLabel(int score) {
    //(void)score;
    if (score > 100 or score < 0) return "invalid";
    if (score < 60) return "fail";
    if (score < 75) return "pass";
    if (score < 90) return "good";
    return "excellent";
}
