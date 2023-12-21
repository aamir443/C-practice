#include<stdio.h>
int digit(int);
int main()
{   int n,result;
    printf("Enter a number : ");
    scanf("%d",&n);
    result=digit(n);
    printf("sum of digit = %d",result);
    return 0;
}
int digit(int n)
{
    int rem,sum=0;
    while(n > 0)
    {
         rem=n%10;
         sum=sum+rem;
        n=n/10;
    }
    return sum;
}