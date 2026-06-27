#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float basicSalary;
    float hra;   // House Rent Allowance
    float da;    // Dearness Allowance
    float grossSalary;
};

void calculateSalary(struct Employee *emp) {
    emp->grossSalary = emp->basicSalary + emp->hra + emp->da;
}

int main() {
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);

        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Basic Salary: ");
        scanf("%f", &employees[i].basicSalary);

        printf("HRA: ");
        scanf("%f", &employees[i].hra);

        printf("DA: ");
        scanf("%f", &employees[i].da);

        calculateSalary(&employees[i]);
    }

    printf("\n--- Salary Details ---\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Basic: %.2f, HRA: %.2f, DA: %.2f\n", employees[i].basicSalary, employees[i].hra, employees[i].da);
        printf("Gross Salary: %.2f\n\n", employees[i].grossSalary);
    }

    return 0;
}
