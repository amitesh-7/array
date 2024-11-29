#include <stdio.h>

int main(){
    int i, n;
    printf("Enter to which array will be printed \n");
    scanf("%d", &n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
        
    }
    return 0;
}