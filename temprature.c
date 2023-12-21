//recursion
#include<stdio.h>
float converttemp(float celsius);
int main(){
    float celsius;
    printf("enter tem in celsius : ");
    scanf("%f", &celsius);
float far=converttemp( celsius);
printf("farhenheit = %f",far);
}
float converttemp(float celsius)
{  
    float far=(celsius*9.0/5.0)+32;
    return far;
}