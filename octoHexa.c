#include<stdio.h>
#include <math.h>
int octtohexa(int n);
int main()
{
     int n;
     printf("Enter the Octal Number :--> ");
     scanf("%d", &n);
     octtohexa(n);
     return 0;
}
int octtohexa(int n)
{    int sum = 0;
     int i = 0;
     while(n != 0)
     {
          int digit = n % 10;
          sum = sum + (digit * pow(8,i));
          n = n / 10;
          i++;
     }
     printf("\nThe Decimal Number is :--> %d",sum);
     int ans = 0,j = 0;
     while(sum != 0)
     {
          int digit = sum % 16;
          ans = ans + (digit * pow(10, j));
          sum = sum / 16;
          j++;
     }
     printf("\nThe Hexadecimal Number is :--> %d",ans);
     return 0;
}