#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* f = NULL;
struct node* r = NULL;

void enqueue(int x){
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = x;
    newnode->next = NULL;

    if (f == 0 && r == 0){
        f = r = newnode;
    }else{
        r->next = newnode;
        r = newnode;
    }
}

void dequeue(){
    if (f == 0 && r == 0){
        printf("Queue is Empty");
    }else{
    struct node* temp = f;
    f = f->next;
    free(temp);
    }
}

void display(){
    struct node* temp = f;
    while (temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
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
    enqueue(x);
    break;

    case 2:
    dequeue();
    break;

    case 3:
    display();
    printf("\n");
    break;
    
    case 4:
    exit(0);
    break;

    default:
    printf("Inavlid\n");
    }
}
return 0;
}
