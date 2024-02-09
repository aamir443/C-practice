// #include<stdio.h>
// void checkPrime(int n);
// int main()
// {
//     int n;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     checkPrime(n);
//     return 0;
// }
// void checkPrime(int n)
// {
//     int i,cf=0;
//     for(i=1;i<=n;i++)
//     {    
//         if(n%i==0)
//         cf++;
//     }
//     if(cf==2)
//     printf("%d prime number",n);
//     else
//     printf("%d not prime number",n);
// }
#include<stdio.h>
int main()
{
    int i, count=0, j;
    printf("Prime numbers between 1 to 100 are:\n");
    for(i=1; i<=100; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               count++;
               break;
           }
        }
        if(count==0 && i!=1)
            printf("%d\n", i);
        count = 0;
    }
    return 0;
}
