//recursion
#include<stdio.h>
int fab(int);
int main()
{   int m;
    printf("enter number of term : ");
    scanf("%d", &m);
    for(int n=0;n<m;n++)
    printf("%d", fab(n));
    return 0;
}
int fab(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int fab1=fab(n-1);
    int fab2=fab(n-2);
    int fabn=fab1+fab2;
    return fabn;
}