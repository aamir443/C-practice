#include<stdio.h>
#include<stlib.h>
struct stack{
    int size;
    int top;
    int *arr;
}
int main(){
    struct stack *s;
     s->size=100;
     s->top=-1;
     s->arr=(int *)malloc(s->size *sizeof(int));
     return 0;
    }