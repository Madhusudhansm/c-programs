#include<stdio.h>
int compute(int n,int a[n]);
void add(int n,int a[n]);
int main()
{
 int n,i ,a[100],s;
 printf("Enter the size of array\n");
 scanf("%d",&n);
 add(n,a);
 s =compute(n,a);
 printf("The sum is :%d\n",s);
}

void add(int n,int a[n])
{
 int i;
 printf(" Enter the n values\n ");
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
}

int compute(int n,int a[n])
{
  int i, sum=0;
  for(i=0;i<n;i++)
  {
   sum = sum+a[i];
  }
  return sum;
}

