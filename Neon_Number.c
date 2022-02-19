#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int square,sum=0,r;
    square=n*n;
    while(square>0)
    {
       r=square%10;
       sum=sum+r;
       square=square/10;
    }
    if(n==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}