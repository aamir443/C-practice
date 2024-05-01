<<<<<<< HEAD
#include<stdio.h>
void function(char**);
int main()
{
    char *arr[]={"ant","bat","cat","dog","egg","fly"};
    function(arr);
    return 0;
}
void function(char **ptr)
{
    char *ptr1;
    ptr1=(ptr+=sizeof(int))[-2];
    printf("%s\n",ptr1);
=======
#include<stdio.h>
void function(char**);
int main()
{
    char *arr[]={"ant","bat","cat","dog","egg","fly"};
    function(arr);
    return 0;
}
void function(char **ptr)
{
    char *ptr1;
    ptr1=(ptr+=sizeof(int))[-2];
    printf("%s\n",ptr1);
>>>>>>> 5814af1bec1b18baa2c33de9613489f330b55d8c
}