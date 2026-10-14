#include "types.hpp"
#include <limits>
int DivideInts(int a, int b) {
    return a/b; 
}

double DivideAsDouble(int a, int b) {
    return 1.0*a/b;
}

bool FitsInInt(long long value) {
    return (bool)(std::numeric_limits<int>::min()<= value && std::numeric_limits<int>::max()>= value);
}

long long SumAsLongLong(int a, int b) {
    return (long long)a + (long long)b;
}