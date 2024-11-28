#include <stdio.h>

int main(){
    int i, n, a=0, b=1, c, d=0;
    printf("Enter n:\n");
    scanf("%d", &n);
    if (n==1)
    {
        printf("0");        
    }
    else if (n==2)
    {
        printf("0 1");
        
    }
    else if (n>2)
    {
        printf("0 1 ");
        
        for (i = 2; i < n; i++)
    {
        i;
        c=a+b;
        a=b;
        b=c;
        d=d+c;
        printf("%d ", d);
    }
    }
    
    return 0;
}