#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    float amount,new_amount,final_amount;
    char gender;
    char smoker;
    printf("enter your age : ");
    scanf("%d",&age);
    fflush(stdin);
    printf("enter your gender : ");
    scanf("%c",&gender);
    fflush(stdin);
    printf("do you smoke : ");
    scanf("%c",&smoker);
    if(age>=20 && age<=30)
    {
        amount=10000;
    }
    else if(age>=30 && age<=40)
    {
        amount=15000;
    }
    else if(age>=40 && age<=50)
    {
        amount=20000;
    }
    else if(age>=50 && age<=60)
    {
        amount=40000;
    }
    else
    {
        printf("insurance is not possible");
    }
    if(smoker=='y')
    {
        new_amount=amount+amount*0.1;
    }
    else
    {
        new_amount=amount;
    }
    if(gender=='f')
    {
        final_amount=new_amount-new_amount*0.1;
    }
    else
    {
        final_amount=new_amount;
    }
    printf("your insurance amount is %f",final_amount);
    return 0;

}