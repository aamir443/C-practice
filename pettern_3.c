#include<stdio.h>
#include<conio.h>
int main()
{
    int lines;
    printf("enter number of lines : ");
    scanf("%d",&lines);
    for(int i=0;i<lines;i++)
    {
        for(int j=lines;j>i;j--)
    {
        printf("*");
    }
    printf("\n");
    }
}