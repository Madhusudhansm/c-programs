#include<stdio.h>
void main()
{
    int n,a[10],sum=0;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    printf("Enter the n values of the array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum is %d",sum)
}
