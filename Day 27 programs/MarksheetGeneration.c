#include <stdio.h>

int main() {
    char name[50];
    int rollNo, i, subjects;
    float marks[10], total = 0, percentage;
    char grade;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    for (i = 0; i < subjects; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    percentage = total / subjects;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("\n------ Marksheet ------\n");
    printf("Name: %s\n", name);
    printf("Roll No: %d\n", rollNo);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);
    printf("-----------------------\n");

    return 0;
}
