#include <stdio.h>
{
 int main() 
    int marks = 35;
    printf("Checking student result...\n");
    if (marks >= 40) {              // fixed: comparison, not assignment
        printf("Student has passed!\n");
    } else {
        printf("Student has failed.\n");
    }
    return 0;
 }
