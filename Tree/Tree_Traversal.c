#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *l;
    struct node* r;
};

struct node* createnode(){
    struct node* newnode;
    int data;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the value (-1 for no node): ");
    scanf("%d", &data);
    if (data == -1){
        return 0;
    }else{
        newnode->data = data;
        printf("Enter the value of left child %d\n", data);
        newnode->l = createnode();
        printf("Enter the value of right child %d\n", data);
        newnode->r = createnode();
        return newnode;
    }
}

int preorder(struct node* root){
    if (root == NULL){
        return 0;
    }
    printf("%d ", root->data);
    preorder(root->l);
    preorder(root->r);
}

int inorder(struct node* root){
    if (root == NULL){
        return 0;
    }
    inorder(root->l);
    printf("%d ", root->data);
    inorder(root->l);
}

int postorder(struct node* root){
    if (root == NULL){
        return 0;
    }
    postorder(root->l);
    postorder(root->l);
    printf("%d ", root->data);
}

int main(){
    struct node* root;
    root = createnode();
    preorder(root);
    return 0;
}


