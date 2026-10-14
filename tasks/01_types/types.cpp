#include "types.hpp"
#include <limits>

// Этот файл нужно реализовать.
// Сигнатуры в types.hpp менять нельзя.

int DivideInts(int a, int b) {
    return a / b;
}

double DivideAsDouble(int a, int b) {
    float c = a;
    return c / b;
}

bool FitsInInt(long long value) {
    if (std::numeric_limits<int>::min() <= value && value <= std::numeric_limits<int>::max()) {
        return true;
    }
    return false;
}

long long SumAsLongLong(int a, int b) {
    return (long long)a + b;
}
