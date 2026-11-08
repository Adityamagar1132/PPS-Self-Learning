#include <stdio.h>

int main() {
    int age;                        // fixed: added semicolon
    printf("Enter your age: ");
    scanf("%d", &age);              // fixed: pass the address of age
    printf("Your age is %d\n", age);
    return 0;
}
