
#include<stdio.h>
int main()
{
    int age=20;
    int *ptr=&age;
    //address of age
    printf("%p\n", &age);
    printf("%u\n", &age);
     printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));
    return 0;
}