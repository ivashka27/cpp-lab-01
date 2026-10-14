#ifdef _WIN32
    #include <fcntl.h>
    #include <io.h>
#endif


#include <iostream>

// Прочитать n, затем n целых чисел.
// Напечатать сумму, минимум, максимум и число строго положительных.
// Формат вывода уже собран ниже, менять его не нужно.
// n в тестах всегда >= 0. При n == 0 чисел дальше нет.

int main() {
    #ifdef _WIN32
        _setmode(_fileno(stdout), _O_BINARY);
    #endif
    // ^^^ тот код, который на винде запускает нормально

    int n = 0;
    if (!(std::cin >> n)) {
        return 0;
    }

    long long sum = 0;
    int positive = 0;
    bool has_value = false;
    int min_value = 0;
    int max_value = 0;

    for (int i = 0; i < n; ++i) {
        int value = 0;
        std::cin >> value;

        sum += value;
        positive += value > 0;
        if (!has_value){
            min_value = value;
            max_value = value;
            has_value = true;
        }
        else {
            min_value = std::min(min_value, value);
            max_value = std::max(max_value, value);
        }
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
