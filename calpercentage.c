//recursion
#include<stdio.h>
float calpercentage(float math,float science,float hindi)
{
    float per=(math+science+hindi)/3;
    return per;
}
int main()
{
float math,science,hindi;
scanf("%f%f%f",&math,&science,&hindi);
float per=calpercentage(math,science,hindi);
printf("percentage = %f",per);
return 0;
}