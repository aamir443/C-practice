#include<stdio.h>
int main()
{
    int a;
    printf("enter a number : ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("number is divisible by 2\n");
    }
    else
    {
        printf("number is not divisible by 2\n");
    }
    return 0;
}