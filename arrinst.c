#include <stdio.h>

void begin(int arr[], int n)
{
    int num;
    printf("Enter the number to insert : ");
    scanf("%d", &num);

    for (int i = n - 1; i >= 0; i--)
        arr[i + 1] = arr[i];

    arr[0] = num;
    n = n + 1;
    
    printf("New array looks like : ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

void loc(int arr[], int n)
{
    int loc, num;
    printf("Enter location to insert : ");
    scanf("%d", &loc);
    printf("Enter the number to insert : ");
    scanf("%d", &num);

    for (int i = n - 1; i >= loc - 1; i--)
        arr[i + 1] = arr[i];

    arr[loc - 1] = num;
    n = n + 1;
    
    printf("New array looks like : ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

void end(int arr[], int n)
{
    int num;
    printf("Enter the number to insert : ");
    scanf("%d", &num);

    arr[n] = num;
    n = n + 1;
    
    printf("New array looks like : ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int n;
    printf("How many numbers you want to enter in the array ?\n");
    scanf("%d", &n);

    int arr[n + 1], choice;
    
    printf("Enter the numbers : \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    printf("Entered array looks like : ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nEnter the choice(in numbers): \n1. Insertion at Beginning\n2. Insertion at Location\n3. Insertion at End\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        begin(arr, n);
        break;
    case 2:
        loc(arr, n);
        break;
    case 3:
        end(arr, n);
        break;
    default:
        printf("Wrong input entered");
        break;
    }
    return 0;
}
