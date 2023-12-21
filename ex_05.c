#include<stdio.h>
#include<conio.h>
#include<math.h>
void is_prime(int n)
{
    int n;
    bool flag=trunc;
    printf("enter number : \n");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        flag=fabs;
    }
    if(flag)
    {
        printf("%d is prime number", n);
    }
    else
    {
        printf("%d is not prime number", n);
    }
}
int main()
{  int n;
    is_prime(n);
    return 0;
}