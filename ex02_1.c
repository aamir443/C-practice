#include<stdio.h>

float add(float a, float b)
{
    return a+b;
}
float sub(float a, float b)
{
    return a-b;
}
float mul(float a, float b)
{
    return a*b;
}
float div(float a, float b)
{
    return a/b;
}

    int main(){
    float a,b;
    int op;
    do{
    printf("enter 2 number : ");
    scanf("%f%f", &a, &b);
    printf("enter your choice : 1 for addition 2 for subtraction 3 for multiply 4 for divide ");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
    printf("addition of two number is %f ",add(a,b));
        break;
    case 2:
    printf("subtraction of two number is %f",sub(a,b));
        break;
    case 3:
    printf("multiply of two number is %f",mul(a,b));
        break;
    case 4:
    printf("divide of two number is %f",div(a,b));
        break;
    default:
    printf("invalid operation");
        break;
    }
    }
    while(op!=4);
    return 0;
}
