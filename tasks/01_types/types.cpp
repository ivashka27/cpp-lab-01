#include "types.hpp"
#include <limits>

// Этот файл нужно реализовать.
// Сигнатуры в types.hpp менять нельзя.

int DivideInts(int a, int b) {
    int z = a / b;
    return z;
}

double DivideAsDouble(int a, int b) {
    double z = (double)a / b;
    return z;
}

bool FitsInInt(long long value) {
    return value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max();
}

long long SumAsLongLong(int a, int b) {
    return (long long) a + (long long)b;
}
