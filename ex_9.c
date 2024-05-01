<<<<<<< HEAD
#include <stdio.h>
int copy_array(int* a, int* b, int n)
{
    int i;
    for (i = 0; i < n; i++) {
        b[i] = a[i];
    }
    for (i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
}
int first_array(int* a, int n)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
int main()
{
    int k[5] = { 3, 6, 9, 2, 5 }, n = 5;
    int l[n];
    printf("The first array is : ");
    first_array(k, n);
    printf("\nThe second array is : ");
    copy_array(k, l, n);
    return 0;
=======
#include <stdio.h>
int copy_array(int* a, int* b, int n)
{
    int i;
    for (i = 0; i < n; i++) {
        b[i] = a[i];
    }
    for (i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
}
int first_array(int* a, int n)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
int main()
{
    int k[5] = { 3, 6, 9, 2, 5 }, n = 5;
    int l[n];
    printf("The first array is : ");
    first_array(k, n);
    printf("\nThe second array is : ");
    copy_array(k, l, n);
    return 0;
>>>>>>> 5814af1bec1b18baa2c33de9613489f330b55d8c
}