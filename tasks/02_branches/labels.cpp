#include "labels.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в labels.hpp менять нельзя.

std::string SignLabel(int value) {
    if(value>0) return "positive";
    if(value==0) return "zero";
    if(value<0) return "negative";
}

std::string ParityLabel(int value) {
    if(value%2==0) return "even";
    else return "odd";
}

std::string GradeLabel(int score) {
    if(score<0 || score>100) return "invalid";
    if(score>=0 && score<=59) return "fail";
    if(score>=60 && score<=74) return "pass";
    if(score>=75 && score<=89) return "good";
    if(score>=90 && score<=100) return "excellent";
}
