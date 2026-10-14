#include <iostream>

// Прочитать n, затем n целых чисел.
// Напечатать сумму, минимум, максимум и число строго положительных.
// Формат вывода уже собран ниже, менять его не нужно.
// n в тестах всегда >= 0. При n == 0 чисел дальше нет.

int main() {
    int n = 0;
    std::cin >> n;

    long long sum = 0;
    int positive = 0;
    bool has_value = false;
    int min_value = 0;
    int max_value = 0;

    if (n > 0) has_value = true;

    for (int i = 0; i < n; ++i) {
        int value = 0;
        std::cin >> value;

        sum += value;
        if (i == 0) {
            min_value = value;
            max_value = value;
        }
        if (value > 0) positive++;
        if (value < min_value) min_value = value;
        else if (value > max_value) max_value = value;
    }

    std::cout << "sum: " << sum << '\n';
    if (!has_value) {
        std::cout << "min: none\n";
        std::cout << "max: none\n";
    } else {
        std::cout << "min: " << min_value << '\n';
        std::cout << "max: " << max_value << '\n';
    }
    std::cout << "positive: " << positive << '\n';
    return 0;
}
