#include "labels.hpp"
#include <string>
// Этот файл нужно реализовать.
// Сигнатуры в labels.hpp менять нельзя.

std::string SignLabel(int value) {
    if (value > 0) return "positive";
    if (value < 0) return "negative";
    return "zero";
}

std::string ParityLabel(int value) {
    if (value % 2 == 0) return "even";
    return "odd";
}

std::string GradeLabel(int score) {
    if (score < 0 || score > 100) return "invalid";
    if (score <= 59) return "fail";
    if (score <= 74) return "pass";
    if (score <= 89) return "good";
    return "excellent";
}