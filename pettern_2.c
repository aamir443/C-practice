#include<stdio.h>
#include<conio.h>
int main()
{
    int lines;
    printf("Enter number of lines : ");
    scanf("%d",&lines);
    for(int i=0;i<lines;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}