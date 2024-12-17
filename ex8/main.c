#include <stdio.h>

int main() {
    int n, i;
    float num, max1 = -1e9, max2 = -1e9;

    printf("Enter the number of values (at least 2): ");
    scanf("%d", &n);

    printf("Enter %d real numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &num);
        if (num > max1) {
            max2 = max1;
            max1 = num;
        } else if (num > max2) {
            max2 = num;
        }
    }

    printf("The two largest values are: %.2f and %.2f\n", max1, max2);
    return 0;
}
