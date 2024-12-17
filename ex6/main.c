#include <stdio.h>

int main() {
    int x, y, M, m, r;

    printf("Enter two positive integers: ");
    scanf("%d %d", &x, &y);

    M = (x > y) ? x : y;
    m = (x < y) ? x : y;

    while (m != 0) {
        r = M % m;
        M = m;
        m = r;
    }

    printf("The greatest common divider is: %d\n", M);
    return 0;
}
