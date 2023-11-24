//take a number from user and sum of all number(0ton)
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d", &n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("the sum is %d", sum);
}