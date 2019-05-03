 #include<stdio.h>
int input()
{
 int n;
 printf("Enter the value\n");
 scanf("%d",&n);
 return n;
}

int compute(int n)
{
        int ans;
  ans=n+1;
return ans;

}

int main()
{
  int a,ans;
a=input();
ans=compute(a);
printf("%d\n",ans);
}


