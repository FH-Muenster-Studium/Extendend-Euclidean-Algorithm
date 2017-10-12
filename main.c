#include <stdio.h>

void extended_euclid(int values[3], int a, int b) {
    if (b == 0) {
        values[0] = a;
        values[1] = 1;
        values[2] = 0;
        return;
    }
    extended_euclid(values, b, a % b);
    int s = values[1];
    int t = values[2];
    values[1] = t;
    values[2] = s - (a / b) * t;
}

int main() {
    int a = 99, b = 78;

    int values[3] = {0, 1, 0};
    extended_euclid(values, a, b);

    printf("%d=%d*%d+%d*%d", values[0], values[1], a, values[2], b);
    return 0;
}
