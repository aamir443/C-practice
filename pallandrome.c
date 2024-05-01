#include<stdio.h>
int isPallendrome(int num)
{
    int reversed=0;
    int originalnum=num;
    while(num !=0){
    reversed=reversed*10+num%10;
    num=num/10;
    }
    if(originalnum==reversed){
        printf("%d is pallendrome number ",originalnum);
    }
    else{
        printf("%d is not pallendrome number",originalnum);
    }
}
int main()
{
    int num;
    printf("enter a number for check number is pallendrome number is or not ");
    scanf("%d",&num);
    isPallendrome( num);
    return 0;
}