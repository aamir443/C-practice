#include<stdio.h>
void decitoHexa(int n);
int main()
{
    int n;
    printf("Enter a decimal number : ");
    scanf("%d",&n);
    decitoHexa(n);
    return 0;
}
void decitoHexa(int n)
{
    int oct=0,count=1;
    while(n != 0)
    {
        int remainder=n%16;
        oct += remainder*count;
        count=count*10;
        n=n/16;
    }
      printf("octal number = %d",oct);
}