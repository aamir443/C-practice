#include<stdio.h>
int main()
{
    int n,arm=0,r,c;
    printf("Enter number for check number is armstrong or not : ");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
  

    }
    if(arm==c)
    printf("this number is armstrong number \n");
    else
    printf("this number is not armstrong number \n");
    
    return 0;
}