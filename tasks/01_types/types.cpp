#include "types.hpp"
#include <limits>

// Этот файл нужно реализовать.
// Сигнатуры в types.hpp менять нельзя.

int DivideInts(int a, int b) {
    (void)a;
    (void)b;
    return a / b;
}

double DivideAsDouble(int a, int b) {
    (void)a;
    (void)b;
    return (double) a / b;
}

bool FitsInInt(long long value) {
    (void)value;
    return std::numeric_limits<int>::min() <= value and value <= std::numeric_limits<int>::max();
}

long long SumAsLongLong(int a, int b) {
    (void)a;
    (void)b;
    long long a1 = a, b1 = b;
    return a1 + b1;
}
