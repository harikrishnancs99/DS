#include<stdio.h>
int main()
{
    int i,n,a[50];
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter the numbers to be inseted:\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("The entered numbers are:\n");
    for(i=0;i<n;i++)
    {
       printf("%d",a[i]);
    }
    return(0);
}
    
