#include "labels.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в labels.hpp менять нельзя.

std::string SignLabel(int value) {
    (void)value;
    if (value < 0) {
        return "negative"; 
    } else {
        if (value > 0) {
            return "positive";
        } else {
            return "zero";
        }
    }
}

std::string ParityLabel(int value) {
    (void)value;
    if (abs(value) % 2 == 0) return "even";
    else return "odd";
}

std::string GradeLabel(int score) {
    (void)score;
    if (score >= 0 and score <= 100) {
        if (score <= 59){
            return "fail";
        } else {
            if (score <= 74) {
                return "pass";
            } else {
                if (score <= 89) return "good";
                else return "excellent";
            }
        }
    } else return "invalid";
}
