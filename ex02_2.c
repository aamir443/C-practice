#include<stdio.h>
#include<math.h>
int factorial(int n);
int power(int x,int y);
int sumofdigit(int num);
int main()
{
int choice;
printf("1. factorial\n");
printf("2. powerl\n");
printf("3. sumofdigit\n");
printf("4. exit\n");
scanf("%d",&choice);
switch(choice){
    case 1:
    {
        int n,fact;
        printf("enter a number  :\n");
        scanf("%d",&n);
        fact=factorial(n);
        printf("factorial is = %d",fact);
        break;
    }
    case 2:
    {
        int x,y,result1;
        printf("enter base  :\n");
        scanf("%d",&x);
        printf("enter power  :\n");
        scanf("%d",&y);
        result1=power(x,y);
        printf("factorial is = %d",result1);
        break;
    }
    case 3:
    {
        int num,sum2;
        printf("enter a number  :\n");
        scanf("%d",&num);
        sum2=sumofdigit(num);
        printf("sum of digit is is = %d",sum2);
        break;
    }
    }
    return 0;

}
int factorial(int n)
{
    if(n>=1)
    {
        return factorial(n-1)*n;
    }
    else
    {
        return 1;
    }
}
int power(int x,int y)
{
    int result=pow(x,y);
    return result;
}
int sumofdigit(int num)
{   
    int m,sum=0;
    for(int i=0;i<num;i++)
   m =num%10;
   sum=sum+m;
   num=num/10;

   return num;
}