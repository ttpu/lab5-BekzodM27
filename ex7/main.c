#include <stdio.h>

int main() {
    int n, i, prev, curr;
    int asc = 1, desc = 1;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    printf("Enter %d values: ", n);
    scanf("%d", &prev);
    for (i = 1; i < n; i++) {
        scanf("%d", &curr);
        if (curr > prev) desc = 0;
        if (curr < prev) asc = 0;
        prev = curr;
    }

    if (asc) printf("Ascending sequence\n");
    else if (desc) printf("Descending sequence\n");
    else printf("Neither ascending nor descending sequence\n");

    return 0;
}
