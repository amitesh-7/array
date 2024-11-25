#include <stdio.h>

int main(){
    int i, sum=0, n;
    printf("Enter the n \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers \n");
    
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    printf("%d \n", sum);
    
    
    return 0;
}