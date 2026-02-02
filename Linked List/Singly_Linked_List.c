#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* newnode;
struct node* head = NULL;
struct node* temp;

struct node* insertatend(int x){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;
    if (head == NULL){
        head = newnode;
        temp = newnode;
    }
    else{
        temp->next = newnode;
        temp = newnode;
    }
}

struct node* insertatbeginning(int x){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;
    if (head == NULL){
        head = newnode;
        temp = newnode;
    }
    else{
        newnode -> next = head;
        head = newnode;
    }
}

void deleteatbeginning(){
    struct node* ptr;
    if(head != NULL){
    ptr = head;
    head = head -> next;
    free(ptr);
    }
    else{
        printf("NULL");
    }
}

void deleteatend(){
    struct node* ptr;
    if(head != NULL){
    ptr = head;
    while (ptr->next->next != NULL){
        ptr = ptr->next;
    }
    free(ptr->next);
    ptr->next = NULL;
    }
    else{
        printf("NULL");
    }
}

void display(){
    temp = head;
    while (temp != NULL){
    printf("%d -> ",temp->data);
    temp = temp->next;
}
printf("NULL");
}



int main(){
    int choice;
    int x;
    while(1){
    printf("1. Add Value At End\n2. Add Value At Beginning\n3. Delete At Beginning\n4. Delete At End\n5. Display\n6. Exit\n");
    
    printf("Enter Your Choice -> ");
    scanf("%d", &choice);
    
    switch (choice){
    case 1:
    printf("Enter Your Value: ");
    scanf("%d",&x);
    insertatend(x);
    break;

    case 2:
    printf("Enter Your Value: ");
    scanf("%d",&x);
    insertatbeginning(x);
    break;

    case 3:
    deleteatbeginning();
    break;
    
    case 4:
    deleteatend();
    break;

    case 5:
    display();
    printf("\n");
    exit(0);
    break;

    case 6:
    exit(0);

    default:
    printf("Inavlid");
    }
}
    return 0;
}

