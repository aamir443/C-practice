//average of 3 number
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three number : ");
    scanf("%d%d%d",&a,&b,&c);
    int avg=(a+b+c)/3;
    printf("The average is %d",avg);
    return 0;
}