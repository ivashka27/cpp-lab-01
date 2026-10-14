#include "types.hpp"
#include <limits>
// Этот файл нужно реализовать.
// Сигнатуры в types.hpp менять нельзя.

int DivideInts(int a, int b) {
    return a / b;
}

double DivideAsDouble(int a, int b) {
    return (double)a / b;
}

bool FitsInInt(long long value) {
    long long min_int = std::numeric_limits<int>::min();
    long long max_int = std::numeric_limits<int>::max();
    bool not_too_small = (value >= min_int);
    bool not_too_big = (value <= max_int);
    return not_too_small && not_too_big;
}

long long SumAsLongLong(int a, int b) {
    return (long long)a + b;
}
