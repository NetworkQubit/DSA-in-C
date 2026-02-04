#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* prev;
    struct node* next;
};

struct node* head = NULL;
struct node* temp = NULL;
struct node* ptr;

void create(int x){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->prev = NULL;
    newnode->next = NULL;
    
    if (head == NULL){
        head = temp = newnode;
    }else{
        temp->next = newnode;
        newnode->prev = temp;
        temp = newnode;
    }
}

void display(){
    ptr = head;
    while (ptr != NULL){
    printf("%d -> ",ptr->data);
    ptr = ptr->next;
}
printf("NULL");
}

int main(){
    int choice;
    int x;
    while(1){
    printf("1. Add Value\n2. Display\n3. Exit\n");
    
    printf("Enter Your Choice -> ");
    scanf("%d", &choice);
    
    switch (choice){
    case 1:
    printf("Enter Your Value: ");
    scanf("%d",&x);
    create(x);
    break;

    case 2:
    display();
    printf("\n");
    exit(0);
    break;

    case 3:
    exit(0);

    default:
    printf("Inavlid");
    }
}
}
