#include<stdio.h>
int search(int *,int);
int main()
{
    int a[10],i,n,f;
    printf("Enter 10 elements\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("Enter number which you want to search = ");
    scanf("%d",&n);
    f=search(a,n);
    if(f==1)
    printf("Number is found\n");
    else
     printf("Number is not found\n");
     return 0;
}
int search(int *p,int n)
{
    int i,f=0;
    for(i=0;i<10;i++)
    {
        if(*p==n)
        {
            f=1;
            break;
        }
        p++;
    }
    return f;
}
// =======
// #include<stdio.h>
// int search(int *,int);
// int main()
// {
//     int a[10],i,n,f;
//     printf("\nEnter 10 elements");
//     for(i=0;i<10;i++)
//     scanf("%d",&a[i]);
//     printf("/nEnter thee number which you want to search = ");
//     scanf("%d",&n);
//     f=search(a,n);
//     if(f==1)
//     printf("\nNumber is found");
//     else
//      printf("\nNumber is not found");
//      return 0;
// }
// int search(int *p,int n)
// {
//     int i,f=0;
//     for(i=0;i<10;i++)
//     {
//         if(*p==n)
//         {
//             f=1;
//             break;
//         }
//         p++;
//     }
//     return f;

// }