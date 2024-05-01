#include<stdio.h>
int main(){
    int table=2;
    int i=0;
    for(i=1;i<10;i++)
    {
        printf("%d*%d=%d \n",table,i,(i*table));
    }
    return 0;
}