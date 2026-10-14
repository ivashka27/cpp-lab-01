#include "types.hpp"
#include <limits>
// Этот файл нужно реализовать.
// Сигнатуры в types.hpp менять нельзя.

int DivideInts(int a, int b) {
    return a/b;
}

double DivideAsDouble(int a, int b) {
    double a1 = a;
    return a1/b;
}

bool FitsInInt(long long value) {
    if (value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max()) return true;
    else return false;
}

long long SumAsLongLong(int a, int b) {
    long long a1 = a;
    long long b1 = b;
    return (a1 + b1);
}
