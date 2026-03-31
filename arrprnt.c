#include<stdio.h>

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

    return 0;
}