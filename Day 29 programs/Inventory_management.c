#include <stdio.h>
#include <string.h>

#define MAX 100

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

struct Product inventory[MAX];
int count = 0;

void addProduct() {
    printf("\nEnter Product ID: ");
    scanf("%d", &inventory[count].id);

    printf("Enter Product Name: ");
    scanf("%s", inventory[count].name);

    printf("Enter Quantity: ");
    scanf("%d", &inventory[count].quantity);

    printf("Enter Price: ");
    scanf("%f", &inventory[count].price);

    count++;
    printf("Product added successfully!\n");
}

void displayProducts() {
    int i;

    if(count == 0) {
        printf("\nInventory is empty!\n");
        return;
    }

    printf("\n--- Inventory List ---\n");
    printf("ID\tName\tQuantity\tPrice\n");

    for(i = 0; i < count; i++) {
        printf("%d\t%s\t%d\t\t%.2f\n",
        inventory[i].id,
        inventory[i].name,
        inventory[i].quantity,
        inventory[i].price);
    }
}

void searchProduct() {
    int id, i, found = 0;

    printf("\nEnter Product ID to search: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++) {
        if(inventory[i].id == id) {
            printf("\nProduct Found\n");
            printf("Name: %s\n", inventory[i].name);
            printf("Quantity: %d\n", inventory[i].quantity);
            printf("Price: %.2f\n", inventory[i].price);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Product not found!\n");
}

void updateProduct() {
    int id, i;

    printf("\nEnter Product ID to update: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++) {
        if(inventory[i].id == id) {

            printf("Enter new quantity: ");
            scanf("%d", &inventory[i].quantity);

            printf("Enter new price: ");
            scanf("%f", &inventory[i].price);

            printf("Product updated successfully!\n");
            return;
        }
    }

    printf("Product not found!\n");
}

void deleteProduct() {
    int id, i, j;

    printf("\nEnter Product ID to delete: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++) {
        if(inventory[i].id == id) {

            for(j = i; j < count-1; j++) {
                inventory[j] = inventory[j+1];
            }

            count--;
            printf("Product deleted successfully!\n");
            return;
        }
    }

    printf("Product not found!\n");
}

int main() {

    int choice;

    while(1) {

        printf("\n===== Inventory Management System =====");
        printf("\n1. Add Product");
        printf("\n2. Display Products");
        printf("\n3. Search Product");
        printf("\n4. Update Product");
        printf("\n5. Delete Product");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                addProduct();
                break;

            case 2:
                displayProducts();
                break;

            case 3:
                searchProduct();
                break;

            case 4:
                updateProduct();
                break;

            case 5:
                deleteProduct();
                break;

            case 6:
                printf("Exiting program...");
                return 0;

            default:
                printf("Invalid choice!");
        }
    }

    return 0;
}