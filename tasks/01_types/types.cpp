#include "types.hpp"
#include <climits>

// Этот файл нужно реализовать.
// Сигнатуры в types.hpp менять нельзя.

int DivideInts(int a, int b) {
    return a / b;
}

double DivideAsDouble(int a, int b) {
    return a * 1.0 / b;
}

bool FitsInInt(long long value) {
    return value >= INT_MIN && value <= INT_MAX;
}

long long SumAsLongLong(int a, int b) {
    long long result = a;
    return result + b;
}
