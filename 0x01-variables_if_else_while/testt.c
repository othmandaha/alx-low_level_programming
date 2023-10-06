#include <stdio.h>

int main() {
    int i = 0;

    while (i < 9) {
        int j = i + 1;

        while (j <= 9) {
            printf("%d%d", i, j);

            // Print a comma and space for all elements except the last one
            if (!(i == 8 && j == 9)) {
                printf(", ");
            }

            ++j;
        }

        ++i;
    }

    return 0;
}

