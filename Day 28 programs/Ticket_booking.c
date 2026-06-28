#include <stdio.h>
#include <string.h>

struct Ticket {
    int ticketNo;
    char name[50];
    int age;
    int booked;
};

int main() {
    struct Ticket t[100];
    int choice, count = 0, i, ticketNo, found;

    while(1) {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. View Tickets\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("\nEnter passenger name: ");
            scanf("%s", t[count].name);

            printf("Enter age: ");
            scanf("%d", &t[count].age);

            t[count].ticketNo = count + 1;
            t[count].booked = 1;

            printf("Ticket booked successfully!\n");
            printf("Your Ticket Number: %d\n", t[count].ticketNo);

            count++;
            break;


        case 2:
            printf("\n----- Booked Tickets -----\n");

            if(count == 0) {
                printf("No tickets booked.\n");
            }
            else {
                for(i = 0; i < count; i++) {
                    if(t[i].booked) {
                        printf("\nTicket No: %d", t[i].ticketNo);
                        printf("\nName: %s", t[i].name);
                        printf("\nAge: %d\n", t[i].age);
                    }
                }
            }
            break;


        case 3:
            printf("Enter ticket number to cancel: ");
            scanf("%d", &ticketNo);

            found = 0;

            for(i = 0; i < count; i++) {
                if(t[i].ticketNo == ticketNo && t[i].booked == 1) {
                    t[i].booked = 0;
                    found = 1;
                    printf("Ticket cancelled successfully!\n");
                    break;
                }
            }

            if(!found)
                printf("Ticket not found.\n");

            break;


        case 4:
            printf("Thank you!\n");
            return 0;


        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}