#include "labels.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в labels.hpp менять нельзя.

std::string SignLabel(int value) {
    if (value == 0) return "zero";
    if (value > 0) return "positive";
    return "negative";
}

std::string ParityLabel(int value) {
    if (value % 2 == 0) return "even";
    return "odd";
}

std::string GradeLabel(int score) {
    if (score > 100) return "invalid";
    if (score >= 90) return "excellent";
    if (score >= 75) return "good";
    if (score >= 60) return "pass";
    if (score >= 0) return "fail";
    return "invalid";
}
