#include "types.hpp"
#include <iostream>
#include <cmath>
#include <limits>
// Этот файл нужно реализовать.
// Сигнатуры в types.hpp менять нельзя.
using namespace std;
int DivideInts(int a, int b) {
    return a/b;
}

double DivideAsDouble(int a, int b) {
    
    double x = a;
    double y = b;
    double p = x/y;
    return p;
}

bool FitsInInt(long long value) {
    if(value>=std::numeric_limits<int>::min()&&value<=std::numeric_limits<int>::max())
        return true;
    else
        return false;
}

long long SumAsLongLong(int a, int b) {
    long long x = a;
    long long y = b;
    long long z = x+y;
    return z;
}