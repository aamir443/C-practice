#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isEmpty(stuct stack *ptr){
    if(ptr->top==-1){
    return 1;
    }
    else{
        return 0;
    }
}

int main(){
    struct stack *s;
     s->size=100;
     s->top=-1;
     s->arr=(int *)malloc(s->size *sizeof(int));
     return 0;
    }
