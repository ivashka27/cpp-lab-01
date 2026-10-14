#include "types.hpp"
#include <limits> // если нет в types.hpp

int DivideInts(int a, int b) {
    return a / b;
}

double DivideAsDouble(int a, int b) {
    return static_cast<double>(a) / static_cast<double>(b);
}

bool FitsInInt(long long value) {
    long long lower_bound = static_cast<long long>(std::numeric_limits<int>::min());
    long long upper_bound = static_cast<long long>(std::numeric_limits<int>::max());
    return value >= lower_bound && value <= upper_bound;
}

long long SumAsLongLong(int a, int b) {
    return static_cast<long long>(a) + static_cast<long long>(b);
}
