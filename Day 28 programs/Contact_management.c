#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

struct Contact contacts[100];
int count = 0;

void addContact() {
    printf("\nEnter Name: ");
    scanf(" %[^\n]", contacts[count].name);

    printf("Enter Phone: ");
    scanf("%s", contacts[count].phone);

    printf("Enter Email: ");
    scanf("%s", contacts[count].email);

    count++;

    printf("Contact added successfully!\n");
}

void viewContacts() {
    if (count == 0) {
        printf("\nNo contacts available.\n");
        return;
    }

    printf("\n--- Contact List ---\n");

    for (int i = 0; i < count; i++) {
        printf("\nContact %d\n", i + 1);
        printf("Name  : %s\n", contacts[i].name);
        printf("Phone : %s\n", contacts[i].phone);
        printf("Email : %s\n", contacts[i].email);
    }
}

void searchContact() {
    char name[50];
    int found = 0;

    printf("\nEnter name to search: ");
    scanf(" %[^\n]", name);

    for (int i = 0; i < count; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            printf("\nContact Found\n");
            printf("Name  : %s\n", contacts[i].name);
            printf("Phone : %s\n", contacts[i].phone);
            printf("Email : %s\n", contacts[i].email);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Contact not found.\n");
}

void deleteContact() {
    char name[50];
    int found = 0;

    printf("\nEnter name to delete: ");
    scanf(" %[^\n]", name);

    for (int i = 0; i < count; i++) {
        if (strcmp(contacts[i].name, name) == 0) {

            for (int j = i; j < count - 1; j++) {
                contacts[j] = contacts[j + 1];
            }

            count--;
            found = 1;

            printf("Contact deleted successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Contact not found.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n===== Contact Management System =====");
        printf("\n1. Add Contact");
        printf("\n2. View Contacts");
        printf("\n3. Search Contact");
        printf("\n4. Delete Contact");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addContact();
                break;

            case 2:
                viewContacts();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                deleteContact();
                break;

            case 5:
                printf("Exiting program...");
                return 0;

            default:
                printf("Invalid choice!");
        }
    }

    return 0;
}