#include "types.hpp"
#include <limits>

// Этот файл нужно реализовать.
// Сигнатуры в types.hpp менять нельзя.

int DivideInts(int a, int b) {
    //(void)a;
    //(void)b;
    return a / b;
}

double DivideAsDouble(int a, int b) {
    //(void)a;
    //(void)b;
    return static_cast<double>(a) / b;
}

bool FitsInInt(long long value) {
    //(void)value;
    int min_int = std::numeric_limits<int>::min();
    int max_int = std::numeric_limits<int>::max();
    return value <= max_int and value >= min_int;
}

long long SumAsLongLong(int a, int b) {
    //(void)a;
    //(void)b;
    return static_cast<long long>(a) + b;
}
