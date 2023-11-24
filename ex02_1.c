#include<stdio.h>
int main()
{
    int a,b,op;
    printf("enter 2 number : ");
    scanf("%d%d", &a, &b);
    printf("enter your choice : 1 for addition 2 for subtraction 3 for multiply 4 for divide ");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
    printf("addition of two number is %d",a+b);
        break;
    case 2:
    printf("subtraction of two number is %d",a-b);
        break;
    case 3:
    printf("multiply of two number is %d",a*b);
        break;
    case 4:
    printf("divide of two number is %d",a/b);
        break;
    default:
        break;
    }
}