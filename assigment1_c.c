#include <stdio.h>

int main() {
    int count = 5;
    printf("Starting countdown:\n");
    while (count > 0) {
        printf("Count: %d\n", count);
        count--;                    // fixed: decrement so the loop reaches 0
    }
    printf("Done!\n");
    return 0;
}
