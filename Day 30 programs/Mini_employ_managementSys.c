#include <stdio.h>
#include <string.h>

#define MAX 100

struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};

struct Employee emp[MAX];
int count = 0;

void addEmployee() {
    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[count].id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp[count].name);

    printf("Enter Department: ");
    scanf(" %[^\n]", emp[count].department);

    printf("Enter Salary: ");
    scanf("%f", &emp[count].salary);

    count++;

    printf("\nEmployee added successfully!\n");
}

void displayEmployee() {
    int i;

    if(count == 0) {
        printf("\nNo employee records found!\n");
        return;
    }

    printf("\n--- Employee Records ---\n");

    for(i = 0; i < count; i++) {
        printf("\nID: %d", emp[i].id);
        printf("\nName: %s", emp[i].name);
        printf("\nDepartment: %s", emp[i].department);
        printf("\nSalary: %.2f\n", emp[i].salary);
    }
}

void searchEmployee() {
    int id, i, found = 0;

    printf("\nEnter Employee ID to search: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++) {
        if(emp[i].id == id) {
            printf("\nEmployee Found:");
            printf("\nID: %d", emp[i].id);
            printf("\nName: %s", emp[i].name);
            printf("\nDepartment: %s", emp[i].department);
            printf("\nSalary: %.2f\n", emp[i].salary);

            found = 1;
            break;
        }
    }

    if(!found)
        printf("\nEmployee not found!\n");
}

void deleteEmployee() {
    int id, i, j, found = 0;

    printf("\nEnter Employee ID to delete: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++) {
        if(emp[i].id == id) {

            for(j = i; j < count-1; j++) {
                emp[j] = emp[j+1];
            }

            count--;
            found = 1;
            printf("\nEmployee deleted successfully!\n");
            break;
        }
    }

    if(!found)
        printf("\nEmployee not found!\n");
}

int main() {

    int choice;

    while(1) {

        printf("\n\n===== Mini Employee Management System =====");
        printf("\n1. Add Employee");
        printf("\n2. Display Employees");
        printf("\n3. Search Employee");
        printf("\n4. Delete Employee");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice) {

            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployee();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                deleteEmployee();
                break;

            case 5:
                printf("\nExiting system...");
                return 0;

            default:
                printf("\nInvalid choice!");
        }
    }

    return 0;
}