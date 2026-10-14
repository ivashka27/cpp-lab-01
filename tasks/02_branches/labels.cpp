#include "labels.hpp"
// Этот файл нужно реализовать.
// Сигнатуры в labels.hpp менять нельзя.

std::string SignLabel(int value) {
    if (value < 0){
        return "negative";
    }
    if (value == 0){
        return "zero";
    }
    if (value > 0){
        return "positive";
    }
    return "";
}

std::string ParityLabel(int value) {
    if (value % 2 == 0) {
        return "even";
    } 
    else {
        return "odd";
    }
    return "";
}

std::string GradeLabel(int score) {
    if (score >= 0 && score <= 100) {
        if (score <= 59) {
            return "fail";
        }
        if (score <= 74) {
            return "pass";
        }
        if (score <= 89) {
            return "good";
        }
        return "excellent";
        
    } else {
        return "invalid";
        }
        return "";
    } 

