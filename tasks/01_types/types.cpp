#include "types.hpp"
#include <limits>
#include <iostream>
// Этот файл нужно реализовать.
// Сигнатуры в types.hpp менять нельзя.

int DivideInts(int a, int b) {
    return a / b;
}

double DivideAsDouble(int a, int b) {
    return double(a)/b;
}

bool FitsInInt(long long value) {
    if (value >= std::numeric_limits<int>::min() and value <= std::numeric_limits<int>::max()) {
        return true;
    } else {
        return false;
    }
}

long long SumAsLongLong(int a, int b) {
    return (long long) a + (long long) b;
}
