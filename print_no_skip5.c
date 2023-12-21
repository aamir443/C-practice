#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%5==0)
           continue;
        printf("%d" ,i);
    }
    return 0;

}