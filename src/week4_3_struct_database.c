/*
 * week4_3_struct_database.c
 * Author: Aysel Abiyeva
 * Student ID: 231ADB279
 * Description:
 *   Simple in-memory "database" using an array of structs.
 *   Demonstrates dynamic allocation for multiple Student records,
 *   reading data from the user, displaying it, and computing statistics.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define struct Student with fields: name, id, grade
struct Student {
    char name[50];
    int id;
    float grade;
};

int main(void) {
    int n;
    struct Student *students = NULL;
    float sum = 0.0f;

    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number.\n");
        return 1;
    }

    // Allocate memory for n Student structs
    students = malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Read student data in a loop
    for (int i = 0; i < n; i++) {
        printf("\nEnter data for student %d\n", i + 1);

        printf("  Name: ");
        scanf("%49s", students[i].name);

        printf("  ID: ");
        scanf("%d", &students[i].id);

        printf("  Grade: ");
        scanf("%f", &students[i].grade);

        sum += students[i].grade;
    }

    // Display all student records
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < n; i++) {
        printf("%d) Name: %-10s | ID: %4d | Grade: %.2f\n",
               i + 1, students[i].name, students[i].id, students[i].grade);
    }

    // Compute and display average grade
    printf("\nAverage grade: %.2f\n", sum / n);

    // Optional: Find top student
    int topIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].grade > students[topIndex].grade) {
            topIndex = i;
        }
    }
    printf("Top student: %s (ID: %d, Grade: %.2f)\n",
           students[topIndex].name, students[topIndex].id, students[topIndex].grade);

    // Free allocated memory
    free(students);

    return 0;
}
