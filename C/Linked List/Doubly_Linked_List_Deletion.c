#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* prev;
    int data;
    struct node* next;
};

struct node* head = NULL;
struct node* tail = NULL;

void create(int x){
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = x;
    newnode->prev = NULL;
    newnode->next = NULL;

    if (head == NULL){
        head = tail = newnode;
    }else{
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

void display(){
    struct node* ptr;
    ptr = head;
    while(ptr != NULL){
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void deletefrombeginning();
void deletefromend();
void deletefromposition(int position);

void deletefrombeginning(){
    struct node* temp;
    if (head == NULL){
        printf("List is empty");
    }else{
    temp = head;
    head = head->next;
    head->prev = NULL;
    free(temp);
    }
}

void deletefromend(){
    struct node* temp;
    if (tail == NULL){
        printf("List is empty");
    }else{
    temp = tail;
    tail->prev->next = NULL;
    tail = tail->prev;
    free(temp);
    }
}

void deletefromposition(int position){
    struct node* temp;
    int i = 1;
    temp = head;
    while (i < position){
        temp = temp->next;
        i++;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
}

int main(){
    int choice;
    int x, position;
    while(1){
    printf("1. Add Value\n2. Delete Value from Beginning\n3. Delete Value from End\n4. Delete Value from a Position\n5. Display\n6. Exit");
    printf("\nEnter Your Choice: ");
    scanf("%d", &choice);

    switch(choice){

    case 1:
    printf("Enter Your Value: ");
    scanf("%d",&x);
    create(x);
    break;

    case 2:
    deletefrombeginning();
    break;

    case 3:
    deletefromend();
    break;

    case 4:
    printf("Enter Your Position: ");
    scanf("%d",&position);
    deletefromposition(position);
    break;

    case 5:
    display();
    printf("\n");
    break;

    case 6:
    exit(0);

    default:
    printf("Inavlid");
    }
}
    return 0;
}
