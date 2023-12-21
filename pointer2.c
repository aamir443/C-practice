
#include<stdio.h>
int square(int n)    //call by value
{
n=n*n;
printf("%d\n",n);
}
int square1(int* n)    //call by reference
{
*n=*n * *n;
printf("%d",*n);
}
int main()
{
    int number=5;
     square(number);
     square1(&number);

    return 0;
}
