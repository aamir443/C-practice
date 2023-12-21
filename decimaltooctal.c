#include<stdio.h>
void decitooct(int n);
int main()
{
    int n;
    printf("Enter a decimal number : ");
    scanf("%d",&n);
    decitooct(n);
    return 0;
}
void decitooct(int n)
{
    int oct=0,count=1;
    while(n != 0)
    {
        int remainder=n%8;
        oct += remainder*count;
        count=count*10;
        n=n/8;
    }
      printf("octal number = %d",oct);
}