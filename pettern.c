#include<stdio.h>
main()
{   int side,i,j;
    printf("enter side of a square ");
    scanf("%d",&side);
    for(i=1;i<side;i++)
    {
        for(j=1;j<side;j++)
        {
        printf(" * ");
        }
        printf("\n");
    }
    return 0;
}