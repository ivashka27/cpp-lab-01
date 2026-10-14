#include <cstdio>
#include <io.h>
#include <fcntl.h>

int main() {
    _setmode(_fileno(stdout), _O_BINARY);
    
    int n = 0;
    if (!(scanf("%d", &n) == 1)) {
        return 0;
    }

    long long sum = 0;
    int positive = 0;
    bool has_value = false;
    int min_value = 0;
    int max_value = 0;

    for (int i = 0; i < n; ++i) {
        int value = 0;
        scanf("%d", &value);

        sum += value;
        
        if (value > 0) {
            positive++;
        }
        
        if (!has_value) {
            min_value = value;
            max_value = value;
            has_value = true;
        } else {
            if (value < min_value) {
                min_value = value;
            }
            if (value > max_value) {
                max_value = value;
            }
        }
    }

    printf("sum: %lld\n", sum);
    if (!has_value) {
        printf("min: none\n");
        printf("max: none\n");
    } else {
        printf("min: %d\n", min_value);
        printf("max: %d\n", max_value);
    }
    printf("positive: %d\n", positive);
    
    return 0;
}