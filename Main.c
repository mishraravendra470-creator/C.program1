#include <stdio.h>

int main() {
    char name[50];
    int roll, marks[5], total = 0;
    float percentage;

    printf("===== STUDENT MARKS MANAGEMENT =====\n");

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("\nEnter marks out of 100:\n");

    for(int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        total += marks[i];
    }

    percentage = total / 5.0;

    printf("\n===== STUDENT RESULT =====\n");

    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", roll);
    printf("Total Marks: %d/500\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if(percentage >= 40) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }

    return 0;
}
