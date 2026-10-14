#include <iostream>
#include <limits>
#include <string>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    long long sum = 0;
    int min_val = 0;
    int max_val = 0;
    int positive_count = 0;
    bool has_elements = false;

    for (int i = 0; i < n; ++i) {
        int current;
        std::cin >> current;

        sum += current;

        if (!has_elements) {
            min_val = current;
            max_val = current;
            has_elements = true;
        }
        else {
            if (current < min_val) min_val = current;
            if (current > max_val) max_val = current;
        }

        if (current > 0) {
            positive_count++;
        }
    }
    std::cout << "sum: " << sum << "\n";
    if (has_elements) {
        std::cout << "min: " << min_val << "\n";
        std::cout << "max: " << max_val << "\n";
    }
    else {
        std::cout << "min: none\n";
        std::cout << "max: none\n";
    }
    std::cout << "positive: " << positive_count << "\n";

    return 0;
}