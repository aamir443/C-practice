#include<stdio.h>
int fibonacci(int n);
int main()
{    int n;

printf("enter number of term ");
scanf("%d",&n);
    fibonacci(n);
    return 0;
}
int fibonacci(int n)
{
  int t1=0,t2=1;
  int next=t1+t2;
  printf("%d%d",t1,t2);
  for(int i=3;i<=n;++i)
   {
    printf("%d",next);
  t1=t2;
  t2=next;
  next=t1+t2;
   }

return 0;
}