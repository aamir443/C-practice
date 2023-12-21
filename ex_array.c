#include<stdio.h>
int findSumOfArray(int a[])
{
  int i,sum=0;
    for(i=0;i<5;i++)
    {
              sum=sum+a[i];
    }
   return sum;
}
int findMaximum(int a[])
{
    int i,max;
    max=a[0];
    for(i=0;i<5;i++)
    {
              if(a[i]>max)
              max=a[i];
    }
   return max;
}
int findMinimum(int a[])
{
    int i,min;
    min=a[0];
    for(i=0;i<5;i++)
    {
              if(a[i]<min)
              min=a[i];
    }
   return min;
}
int main()
    {
          int a[5],i;
          printf("enter value in array : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int s=findSumOfArray(a);
     printf("Sum is = %d\n",s);
     int r=findMaximum(a);
     printf("Maximum is = %d\n",r);
          int p=findMinimum(a);
     printf("Minimum is = %d\n",p);
    return 0;
    }
