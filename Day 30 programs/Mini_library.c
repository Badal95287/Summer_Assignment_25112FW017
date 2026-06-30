#include <stdio.h>
#include <string.h>

#define MAX 100

struct Book {
    int id;
    char name[50];
    char author[50];
};

struct Book books[MAX];
int count = 0;

void addBook()
{
    printf("\nEnter Book ID: ");
    scanf("%d", &books[count].id);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", books[count].name);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", books[count].author);

    count++;

    printf("Book Added Successfully!\n");
}

void displayBooks()
{
    int i;

    if(count == 0)
    {
        printf("\nNo Books Available\n");
        return;
    }

    printf("\n--- Book List ---\n");

    for(i = 0; i < count; i++)
    {
        printf("\nBook ID: %d", books[i].id);
        printf("\nName: %s", books[i].name);
        printf("\nAuthor: %s\n", books[i].author);
    }
}

void searchBook()
{
    int id, i, found = 0;

    printf("\nEnter Book ID to Search: ");
    scanf("%d",&id);

    for(i = 0; i < count; i++)
    {
        if(books[i].id == id)
        {
            printf("\nBook Found");
            printf("\nID: %d", books[i].id);
            printf("\nName: %s", books[i].name);
            printf("\nAuthor: %s\n", books[i].author);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Book Not Found\n");
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n\n===== MINI LIBRARY SYSTEM =====");
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Exit");

        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                printf("Exiting System...");
                return 0;

            default:
                printf("Invalid Choice!");
        }
    }

    return 0;
}