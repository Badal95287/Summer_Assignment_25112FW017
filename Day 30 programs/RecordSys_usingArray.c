#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int roll;
    char name[50];
    char course[50];
    float marks;
};

int main() {
    struct Student s[MAX];
    int n = 0;
    int choice, i, roll, found;

    while (1) {
        printf("\n===== Student Record Management System =====");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Update Student");
        printf("\n5. Delete Student");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("\nEnter Roll Number: ");
            scanf("%d", &s[n].roll);

            printf("Enter Name: ");
            scanf(" %[^\n]", s[n].name);

            printf("Enter Course: ");
            scanf(" %[^\n]", s[n].course);

            printf("Enter Marks: ");
            scanf("%f", &s[n].marks);

            n++;

            printf("Student added successfully!");
            break;


        case 2:
            if(n == 0) {
                printf("\nNo records found!");
            }
            else {
                printf("\n--- Student Records ---");
                for(i = 0; i < n; i++) {
                    printf("\n\nRoll No: %d", s[i].roll);
                    printf("\nName: %s", s[i].name);
                    printf("\nCourse: %s", s[i].course);
                    printf("\nMarks: %.2f", s[i].marks);
                }
            }
            break;


        case 3:
            printf("\nEnter Roll Number to Search: ");
            scanf("%d", &roll);

            found = 0;

            for(i = 0; i < n; i++) {
                if(s[i].roll == roll) {
                    printf("\nRecord Found!");
                    printf("\nName: %s", s[i].name);
                    printf("\nCourse: %s", s[i].course);
                    printf("\nMarks: %.2f", s[i].marks);
                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("\nStudent not found!");

            break;


        case 4:
            printf("\nEnter Roll Number to Update: ");
            scanf("%d", &roll);

            found = 0;

            for(i = 0; i < n; i++) {
                if(s[i].roll == roll) {

                    printf("Enter New Name: ");
                    scanf(" %[^\n]", s[i].name);

                    printf("Enter New Course: ");
                    scanf(" %[^\n]", s[i].course);

                    printf("Enter New Marks: ");
                    scanf("%f", &s[i].marks);

                    printf("Record Updated!");
                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("Student not found!");

            break;


        case 5:
            printf("\nEnter Roll Number to Delete: ");
            scanf("%d", &roll);

            found = 0;

            for(i = 0; i < n; i++) {

                if(s[i].roll == roll) {

                    for(int j=i; j<n-1; j++) {
                        s[j] = s[j+1];
                    }

                    n--;

                    printf("Record Deleted!");
                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("Student not found!");

            break;


        case 6:
            return 0;


        default:
            printf("Invalid choice!");
        }
    }

    return 0;
}