#include<stdio.h>
int fact(int n);
int main()
{
  printf("factorial is %d",fact(6));
  return 0;
}
int fact(int n)
{ 
    if(n>=1)
    {
    return fact(n-1)*n;
    }
    else{
        return 1;
    }


}