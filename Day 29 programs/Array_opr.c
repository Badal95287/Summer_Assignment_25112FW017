#include <stdio.h>

int main()
{
    int arr[100], n, choice, i, pos, value, key, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n--- MENU DRIVEN ARRAY OPERATION ---");
        printf("\n1. Display Array");
        printf("\n2. Insert Element");
        printf("\n3. Delete Element");
        printf("\n4. Search Element");
        printf("\n5. Sort Array");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Array elements are:\n");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                break;

            case 2:
                printf("Enter position to insert: ");
                scanf("%d", &pos);

                printf("Enter value: ");
                scanf("%d", &value);

                for(i = n; i >= pos; i--)
                {
                    arr[i] = arr[i-1];
                }

                arr[pos-1] = value;
                n++;

                printf("Element inserted successfully");
                break;

            case 3:
                printf("Enter position to delete: ");
                scanf("%d", &pos);

                for(i = pos-1; i < n-1; i++)
                {
                    arr[i] = arr[i+1];
                }

                n--;

                printf("Element deleted successfully");
                break;

            case 4:
                printf("Enter element to search: ");
                scanf("%d", &key);

                for(i = 0; i < n; i++)
                {
                    if(arr[i] == key)
                    {
                        printf("Element found at position %d", i+1);
                        break;
                    }
                }

                if(i == n)
                {
                    printf("Element not found");
                }
                break;

            case 5:
                for(i = 0; i < n-1; i++)
                {
                    for(int j = i+1; j < n; j++)
                    {
                        if(arr[i] > arr[j])
                        {
                            temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }

                printf("Array sorted successfully");
                break;

            case 6:
                printf("Exiting program...");
                break;

            default:
                printf("Invalid choice!");
        }

    } while(choice != 6);

    return 0;
}