#include "labels.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в labels.hpp менять нельзя.

std::string SignLabel(int value) {
  if (value == 0) {
    return "zero";
  } else if (value > 0) {
    return "positive";
  } else if (value < 0) {
    return "negative";
  }
  return "";
}

std::string ParityLabel(int value) {
  bool is_odd = static_cast<unsigned int>(value) % 2;
  if (is_odd == 1) {
    return "odd";
  } else {
    return "even";
  }
  return "";
}

std::string GradeLabel(int score) {
  if (score < 0 || score > 100) {
    return "invalid";
  } else if (score <= 59) {
    return "fail";
  } else if (score >= 60 && score <= 74) {
    return "pass";
  } else if (score >=75 && score <= 89) {
    return "good";
  } else if (score >= 90 && score <= 100) {
    return "excellent";
  }
  return "";
}
