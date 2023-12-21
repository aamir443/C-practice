#include<stdio.h>
void swap(int*, int*);
int main()
{
    int a, b;
    printf("Enter enter two number : ");
    scanf("%d%d", &a, &b);
    printf("before swapping a=%d b=%d\n", a, b);
    swap(&a, &b);
    printf("after swapping  a=%d b=%d\n", a, b);
    return 0;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x   = *y;
    *y   = temp;
}