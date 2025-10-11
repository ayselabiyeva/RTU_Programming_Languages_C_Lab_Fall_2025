/*
 * week4_2_struct_student.c
 * Author: Aysel Abiyeva
 * Student ID: 231ADB279
 * Description:
 *   Demonstrates defining and using a struct in C.
 *   Students define a 'Student' struct with fields like name, id, and grade.
 *   Then create a few instances and print them.
 */

#include <stdio.h>
#include <string.h>

// Define struct Student with fields: name, id, and grade
struct Student {
    char name[50];
    int id;
    float grade;
};

int main(void) {
    // Declare Student variables
    struct Student student1, student2;

    // Assign values manually
    strcpy(student1.name, "Aysel");
    student1.id = 109;
    student1.grade = 6.3;

    strcpy(student2.name, "Elmar");
    student2.id = 102;
    student2.grade = 7.8;

    // Print struct contents
    printf("Student 1:\n");
    printf("  Name: %s\n", student1.name);
    printf("  ID: %d\n", student1.id);
    printf("  Grade: %.2f\n\n", student1.grade);

    printf("Student 2:\n");
    printf("  Name: %s\n", student2.name);
    printf("  ID: %d\n", student2.id);
    printf("  Grade: %.2f\n", student2.grade);

    return 0;
}
