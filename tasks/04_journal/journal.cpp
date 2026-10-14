#include "journal.hpp"

// Этот файл нужно реализовать.
// Сигнатуры в journal.hpp менять нельзя.

bool IsValidScore(int score) {
  return score >= 0 && score <= 100;
}

long long AddToSum(long long sum, int score) {
  return sum + static_cast<long long>(score);
}

int NextMin(bool has_score, int current_min, int score) {
  if (has_score == false) {
    return score;
  }
  if (current_min <= score) {
    return current_min;
  }
  return score;
}

int NextMax(bool has_score, int current_max, int score) {
  if (has_score == false) {
    return score;
  }
  if (current_max >= score) {
    return current_max;
  }
  return score;
}

int NextPassed(int passed, int score) {
  if (score >= 60) {
    passed += 1;
  }
  return passed;
}

double Average(long long sum, int count) {
  return static_cast<double>(sum)/static_cast<double>(count);
}

std::string Verdict(int count, int passed, int min_score) {
  if (count == 0) {
    return "empty";
  } else if (passed != count) {
    return "debt";
  } else if (min_score >= 90) {
    return "excellent";
  }
  return "ok";
}
