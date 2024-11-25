#include <stdio.h>

int main(){
    int n;
    printf("Enter the n \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int big=arr[0];
    for (int i = 1; i < n; i++)
    {
        if (big<arr[i])
        {
            big=arr[i];
        }
    }
    printf("The largest number among the integer is %d", big);
    return 0;
}