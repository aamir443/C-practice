#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct link{
    int data;
    struct link* next;
}node;

void createnode(node **ptr1,node **ptr2)
{
    node *temp=(node *)malloc(sizeof(node));
    printf("Enter information ");
    scanf("%d",&temp->data);
    if(*ptr1==NULL){
    *ptr1=temp;
    *ptr2=temp;
    }
    else{
        (*ptr2)->next=temp;
        *ptr2=temp;
        }
    temp->next=NULL;
}

void travers(node *ptr){
    while(ptr!=NULL){
        printf(" %d",ptr->data);
         ptr=ptr->next;
    }
   
    printf(" nexting");
    getch();
}

void insertbeg(node **head){
    if(*head!=NULL){
        node *temp=(node*)malloc(sizeof(node));
        printf("Enter information at begning ");
        scanf("%d",&temp->data);
        temp->next =*head;
        *head=temp;
    }
    else{
        printf("List is Empty");
    }
}

int main(){
    node *head=NULL;
    node *last=NULL;
    createnode(&head,&last);
    insertbeg(&head);
    travers(head);
    return 0;
}