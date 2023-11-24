// keep taking number input from user until odd number
#include<stdio.h>
int  main()
{
    do
    {
    int n;
    printf("enter a number : ");
    scanf("%d  \n", &n);
    printf("%d", n);
    if(n%2 != 0)
    break;
    }
    while(1);
    printf("you entered odd number thats why loop end");
    return 0;
}