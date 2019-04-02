#include<stdio.h>
void add(int a,int b,int *c)
{
    
    *c=a+b;
}
int main()
{
    int x,y,z;
    printf("enter the value of a and b");
    scanf("%d %d",&x,&y);
    add (x,y,&z);
    printf("the sum is =%d\n",z);
}
