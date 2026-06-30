#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student
{
    int roll;
    char name[50];
    char course[30];
    float marks;
};

struct Student s[MAX];
int count = 0;


// Function to add student
void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d",&s[count].roll);

    printf("Enter Name: ");
    scanf("%s",s[count].name);

    printf("Enter Course: ");
    scanf("%s",s[count].course);

    printf("Enter Marks: ");
    scanf("%f",&s[count].marks);

    count++;

    printf("\nStudent Added Successfully!\n");
}


// Function to display students
void displayStudent()
{
    int i;

    if(count==0)
    {
        printf("\nNo Records Found\n");
        return;
    }

    printf("\n--- Student Records ---\n");

    for(i=0;i<count;i++)
    {
        printf("\nRoll: %d",s[i].roll);
        printf("\nName: %s",s[i].name);
        printf("\nCourse: %s",s[i].course);
        printf("\nMarks: %.2f\n",s[i].marks);
    }
}


// Function to search student
void searchStudent()
{
    int roll,i,found=0;

    printf("\nEnter Roll Number to Search: ");
    scanf("%d",&roll);

    for(i=0;i<count;i++)
    {
        if(s[i].roll==roll)
        {
            printf("\nStudent Found");
            printf("\nName: %s",s[i].name);
            printf("\nCourse: %s",s[i].course);
            printf("\nMarks: %.2f\n",s[i].marks);

            found=1;
            break;
        }
    }

    if(found==0)
        printf("\nStudent Not Found\n");
}


// Function to update student
void updateStudent()
{
    int roll,i;

    printf("\nEnter Roll Number: ");
    scanf("%d",&roll);

    for(i=0;i<count;i++)
    {
        if(s[i].roll==roll)
        {
            printf("Enter New Name: ");
            scanf("%s",s[i].name);

            printf("Enter New Course: ");
            scanf("%s",s[i].course);

            printf("Enter New Marks: ");
            scanf("%f",&s[i].marks);

            printf("\nUpdated Successfully\n");
            return;
        }
    }

    printf("\nStudent Not Found\n");
}


// Function to delete student
void deleteStudent()
{
    int roll,i,j;

    printf("\nEnter Roll Number: ");
    scanf("%d",&roll);

    for(i=0;i<count;i++)
    {
        if(s[i].roll==roll)
        {
            for(j=i;j<count-1;j++)
            {
                s[j]=s[j+1];
            }

            count--;

            printf("\nDeleted Successfully\n");
            return;
        }
    }

    printf("\nStudent Not Found\n");
}


// Main Function
int main()
{
    int choice;

    while(1)
    {
        printf("\n\n===== Student Management System =====");
        printf("\n1. Add Student");
        printf("\n2. Display Student");
        printf("\n3. Search Student");
        printf("\n4. Update Student");
        printf("\n5. Delete Student");
        printf("\n6. Exit");

        printf("\nEnter Choice: ");
        scanf("%d",&choice);


        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudent();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                printf("\nThank You!");
                return 0;

            default:
                printf("\nInvalid Choice");
        }
    }

    return 0;
}