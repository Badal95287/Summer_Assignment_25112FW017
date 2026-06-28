#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char name[50];
    char author[50];
    int issued;
};

struct Book books[100];
int count = 0;

void addBook() {
    printf("\nEnter Book ID: ");
    scanf("%d", &books[count].id);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", books[count].name);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", books[count].author);

    books[count].issued = 0;

    count++;

    printf("Book added successfully!\n");
}

void displayBooks() {
    if(count == 0) {
        printf("\nNo books available.\n");
        return;
    }

    printf("\n--- Library Books ---\n");

    for(int i = 0; i < count; i++) {
        printf("\nBook ID: %d", books[i].id);
        printf("\nName: %s", books[i].name);
        printf("\nAuthor: %s", books[i].author);

        if(books[i].issued)
            printf("\nStatus: Issued\n");
        else
            printf("\nStatus: Available\n");
    }
}

void searchBook() {
    int id, found = 0;

    printf("\nEnter Book ID to search: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++) {
        if(books[i].id == id) {
            printf("\nBook Found!");
            printf("\nName: %s", books[i].name);
            printf("\nAuthor: %s\n", books[i].author);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Book not found!\n");
}

void issueBook() {
    int id;

    printf("\nEnter Book ID to issue: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++) {
        if(books[i].id == id) {

            if(books[i].issued)
                printf("Book already issued!\n");
            else {
                books[i].issued = 1;
                printf("Book issued successfully!\n");
            }
            return;
        }
    }

    printf("Book not found!\n");
}

void returnBook() {
    int id;

    printf("\nEnter Book ID to return: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++) {

        if(books[i].id == id) {

            if(books[i].issued) {
                books[i].issued = 0;
                printf("Book returned successfully!\n");
            }
            else
                printf("Book was not issued!\n");

            return;
        }
    }

    printf("Book not found!\n");
}

int main() {

    int choice;

    while(1) {

        printf("\n\n===== Library Management System =====");
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Issue Book");
        printf("\n5. Return Book");
        printf("\n6. Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice) {

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
                issueBook();
                break;

            case 5:
                returnBook();
                break;

            case 6:
                printf("Exiting...");
                return 0;

            default:
                printf("Invalid choice!");
        }
    }

    return 0;
}