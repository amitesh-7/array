#include <stdio.h>

int main(){
    int n, sum=1;
    
    printf("Enter n \n");
    scanf("%d", &n);
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    if (n==1)
    {
        printf("The sum is 0.\n");
    }
    else if (n==2)
    {
        printf("The sum is 1.\n");
        
    }
    
    else if (n>2)
    {
        for (int i = 2; i < n; i++)
        {
            arr[i]=arr[i-1]+arr[i-2];
            sum=sum+arr[i];
        }
        printf("The sum is %d \n", sum);
    }
    
    return 0;
}