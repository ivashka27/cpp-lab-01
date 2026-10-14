#include "labels.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в labels.hpp менять нельзя.

std::string SignLabel(int value) {
    if (value < 0) {
        return "negative";
    } else if (value > 0) {
        return "positive";
    } else {
        return "zero";
    }
}

std::string ParityLabel(int value) {

    if (value % 2 == 0) {
        return "even";
    } else {
        return "odd";
    }

}

std::string GradeLabel(int score) {
    if (score < 0 or score > 100) {
        return "invalid";
    } else if (score >= 90) {
        return "excellent";
    } else if (score >=75) {
        return "good";
    } else if (score >=60) {
        return "pass";
    } else {
        return "fail";
    } 
}
