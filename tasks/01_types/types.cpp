#include "types.hpp"
#include <limits>

// Этот файл нужно реализовать.
// Сигнатуры в types.hpp менять нельзя.

long long min_lim = std::numeric_limits<int>::min();
long long max_lim = std::numeric_limits<int>::max();

int DivideInts(int a, int b) {
    return a/b;
}

double DivideAsDouble(int a, int b) {
    return static_cast<double>(a)/b;
}

bool FitsInInt(long long value) {
    return value >= min_lim & value <= max_lim;
}

long long SumAsLongLong(int a, int b) {
    return static_cast<long long>(a) + b;
}
