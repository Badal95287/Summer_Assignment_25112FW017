#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};

void addEmployee(FILE *fp) {
    struct Employee emp;
    printf("\nEnter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Name: ");
    scanf(" %[^\n]", emp.name);
    printf("Enter Department: ");
    scanf(" %[^\n]", emp.department);
    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    fwrite(&emp, sizeof(struct Employee), 1, fp);
    printf("Employee added successfully!\n");
}

void displayEmployees(FILE *fp) {
    struct Employee emp;
    rewind(fp);
    printf("\n--- Employee Records ---\n");
    while (fread(&emp, sizeof(struct Employee), 1, fp)) {
        printf("ID: %d\nName: %s\nDepartment: %s\nSalary: %.2f\n\n",
               emp.id, emp.name, emp.department, emp.salary);
    }
}

int main() {
    FILE *fp;
    int choice;

    fp = fopen("employees.dat", "ab+");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    do {
        printf("\nEmployee Management System\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee(fp);
                break;
            case 2:
                displayEmployees(fp);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid