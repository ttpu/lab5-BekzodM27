#include <stdio.h>

int main() {
    char lowercase = 'a', uppercase = 'A';

    printf("Small ASCII Capital ASCII\n");
    for (int i = 0; i < 26; i++) {
        printf("'%c' %3d '%c' %3d\n", lowercase + i, lowercase + i, uppercase + i, uppercase + i);
    }
    return 0;
}
