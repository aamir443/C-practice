#include<stdio.h>
void checkPrime(int n);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    checkPrime(n);
    return 0;
}
void checkPrime(int n)
{
    int i,cf=0;
    for(i=1;i<=n;i++)
    {    
        if(n%i==0)
        cf++;
    }
    if(cf==2)
    printf("%d prime number",n);
    else
    printf("%d not prime number",n);
}
