#include<stdio.h>
int main()
{
    char vowel;
    printf("enter a character : ");
    scanf("%d", &vowel);
    if(vowel=='a' || vowel=='e' || vowel=='i' || vowel=='0' || vowel=='u')
    {
        printf("this is a vowel");
    }
    else
    {
        printf("this ia a consonant");
    }
    return 0;
}