#include<stdio.h>
int main(){
    int table;
    int i=0;
    printf("enter table ");
    scanf("%d",&table);
    for(i=1;i<10;i++)
    {
        printf("%d*%d=%d \n",table,i,(i*table));
    }
    return 0;
}