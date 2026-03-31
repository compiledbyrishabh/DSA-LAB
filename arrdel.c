#include <stdio.h>
void begin(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n = n - 1;
    printf("New array looks like : ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
void loc(int arr[], int n)
{
    int loc;
    printf("Enter location to delete : ");
    scanf("%d", &loc);
    for (int i = loc - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n = n - 1;
    printf("New array looks like : ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
void end(int arr[], int n)
{
    n = n - 1;
    printf("New array looks like : ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int n;
    printf("How many numbers you want to enter in the array ?\n");
    scanf("%d", &n);
    int arr[n], choice;
    printf("Enter the numbers : \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Entered array looks like : ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nEnter the choice(in numbers): \n1. Deletion from Beginning\n2. Deletion from Location\n3. Deletion from End\n");
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
