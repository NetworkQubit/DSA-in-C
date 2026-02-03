#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* top = NULL;

void push(int x){
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL){
        printf("Heap Overflow");
        exit(0);
    }else{
        newnode->data = x;
        newnode->next = top;
        top = newnode;
    }
}

void pop(){
    struct node* temp;
    if (top == NULL){
        printf("Stack Underflow");
        exit(0);
    }else{
        temp = top;
        top = top->next;
        free(temp);
    }
}

void display(){
    struct node* temp;
    temp = top;
    if (top == NULL){
        printf("Stack Overflow");
        exit(0);
    }else{
        while (temp != NULL){
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}        

int main(){
int choice;
    int x;
    while(1){
    printf("1. Add Value\n2. Delete Value\n3. Display\n4. Exit\n");
    
    printf("Enter Your Choice -> ");
    scanf("%d", &choice);
    
    switch (choice){
    case 1:
    printf("Enter Your Value: ");
    scanf("%d",&x);
    push(x);
    break;

    case 2:
    pop();
    break;   

    case 3:
    display();
    printf("\n");
    exit(0);
    break;

    case 4:
    exit(0);
    break;

    default:
    printf("Inavlid");
    }
}
    return 0;
}
