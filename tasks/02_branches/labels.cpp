#include "labels.hpp"
#include <iostream>

#include <string>

using namespace std;
// Этот файл нужно реализовать.
// Сигнатуры в labels.hpp менять нельзя.

std::string SignLabel(int value) {
    if(value>0)
    return "positive";
    if(value == 0)
    return "zero";
    
    return "negative";
}

std::string ParityLabel(int value) {
    if(value%2==0)
        return "even";
    else
        return "odd";
}

std::string GradeLabel(int score) {
    if(score>100||score<0){
        return "invalid";
    }
    else{
        if(score>=0&&score<=59)
            return "fail";
        if(score>=60&&score<=74)
            return "pass";
        if(score>=75&&score<=89)
            return "good";
    }
    return "excellent";
}
