#include<stdio.h>
void prime(int n);
void armstrong(int n2);
int main()
{
  int op;
  printf("1.for prinme : \n");
  printf("2. for armstrong : ");
  scanf("%d",&op);
  switch(op)
  {
    case 1:
    {
        int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    prime(n);
     break;
    }
    case 2:
    {
         int n2;
    printf("Enter a number : ");
    scanf("%d",&n2);
    armstrong(n2);
     break;
    }
  }
  return 0;
}
void prime(int n)
{
   {
    int i,cf=0;
    for(i=1;i<=n;i++)
    {    
        if(n%i==0)
        cf++;
    }
    if(cf==2)
    printf("%d prime number",n);
    else
    printf("%d not prime number",n);  
   }
}
void armstrong(int n2)
{
     int arm=0,r,c;
    c=n2;
    while(n2>0)
    {
        r=n2%10;
        arm=(r*r*r)+arm;
        n2=n2/10;
  

    }
    if(arm==c)
    printf("this number is armstrong number \n");
    else
    printf("this number is not armstrong number \n");
}