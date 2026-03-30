#include <stdio.h>
int main()
{
    int arr[50], greatest, lowest;
    printf("Enter 10 numbers :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Entered numbers are : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    lowest = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (lowest >= arr[i])
            lowest = arr[i];
    }
    printf("\nLowest Number from all is %d", lowest);
    greatest = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (greatest <= arr[i])
            greatest = arr[i];
    }
    printf("\nGreatest Number from all is %d", greatest);
    return 0;
}