#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(int data){
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
struct node* search(struct node* root,int key)
{
    if(root==NULL){
        return NULL;
    }
    if(key==root->data){
        return root;
    }
    else if(key<root->data){
        return search(root->left,key);
    }
    else {
        return search(root->right,key);

} 
}

void insert(struct node *root, int key){
   struct node *prev = NULL;
   while(root!=NULL){
       prev = root;
       if(key==root->data){
           printf("Cannot insert %d, already in BST", key);
           return;
       }
       else if(key<root->data){
           root = root->left;
       }
       else{
           root = root->right;
       }
   }
   struct node* new = createNode(key);
   if(key<prev->data){
       prev->left = new;
   }
   else{
       prev->right = new;
   }
}


int main(){
    struct node *p=createNode(100);
    struct node *p1=createNode(90);
    struct node *p2=createNode(200);
    struct node *p3=createNode(150);
    struct node *p4=createNode(250);


    p->left=p1;
    p->right=p2;
    p2->left=p3;
    p2->right=p4;
    // struct node* n=search(p,200);
    // if(n!=NULL){
    //     printf("Element is found %d",n->data);
    // }
    // else{
    //     printf("element not found");
    // }
    insert(p, 110);
    printf("%d", p->right->left->data);

    return 0;
}