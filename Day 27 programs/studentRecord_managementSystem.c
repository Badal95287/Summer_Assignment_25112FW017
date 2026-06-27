#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    float marks;
};

struct Student students[100];
int count = 0;

void addStudent() {
    if (count >= 100) {
        printf("Record limit reached!\n");
        return;
    }
    struct Student s;
    printf("Enter ID: ");
    scanf("%d", &s.id);
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter Age: ");
    scanf("%d", &s.age);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    students[count++] = s;
    printf("Student added successfully!\n");
}

void displayStudents() {
    if (count == 0) {
        printf("No records found.\n");
        return;
    }
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Age: %d | Marks: %.2f\n",
               students[i].id, students[i].name, students[i].age, students[i].marks);
    }
}

void searchStudent() {
    int id;
    printf("Enter ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("Record Found: ID: %d | Name: %s | Age: %d | Marks: %.2f\n",
                   students[i].id, students[i].name, students[i].age, students[i].marks);
            return;
        }
    }
    printf("Record not found.\n");
}

void deleteStudent() {
    int id;
    printf("Enter ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }
            count--;
            printf("Record deleted successfully!\n");
            return;
        }
    }
    printf("Record