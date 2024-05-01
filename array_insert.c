<<<<<<< HEAD
#include<stdio.h>
int main()
    {
        int a[100],n,i,item;
        printf("eneter size of array ");
        scanf("%d",&n);
        printf("enter element in array ");
        for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
        printf("insert an element at begining ");
        scanf("%d",&item);
        n++;
        for(i=n;i>1;i--)
        {
            a[i-1]=a[i-2];
        }
        a[0]=item;
        printf("resultant array ");
        for(i=0;i<5;i++)
        printf("%d",a[i]);
        return 0;
}
=======
#include<stdio.h>
int main()
    {
        int a[100],n,i,item;
        printf("eneter size of array ");
        scanf("%d",&n);
        printf("enter element in array ");
        for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
        printf("insert an element at begining ");
        scanf("%d",&item);
        n++;
        for(i=n;i>1;i--)
        {
            a[i-1]=a[i-2];
        }
        a[0]=item;
        printf("resultant array ");
        for(i=0;i<5;i++)
        printf("%d",a[i]);
        return 0;
}
>>>>>>> 5814af1bec1b18baa2c33de9613489f330b55d8c
