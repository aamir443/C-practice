#include<stdio.h>
int main()
{
int a[3][3], b[3][3], c[3][3], i,j;
printf("enter element in 1st matrix \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++){
    scanf("%d",&a[i][j]);
    }
}
printf("enter element in 2nd matrix \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++){
    scanf("%d",&b[i][j]);
    }
}
printf("1st matrix \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++){
    printf("%d",a[i][j]);
    }
    printf("\n");
}
printf("2nd matrix \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++){
    printf("%d",b[i][j]);
    }
    printf("\n");
}
printf("sum of matrix \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++){
    printf("%d",c[i][j]= a[i][j] + b[i][j]);
    }
    printf("\n");
}
return 0;
}
