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

void insertatbeginning(int x);
void insertatend(int x);
void insertatposition(int position, int x);
void insertafterposition(int position, int x);

void insertatbeginning(int x){
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = x;
    newnode->prev = NULL;
    newnode->next = NULL;

    if (head == NULL){
        head = tail = newnode;
    }else{
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}
}

void insertatend(int x){
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = x;
    newnode->prev = NULL;
    newnode->next = NULL;

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void insertatposition(int position, int x){
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = x;
    newnode->prev = NULL;
    newnode->next = NULL;

    int i = 1;
    struct node* temp;
    temp = head;
    while(i < position - 1){
        temp = temp->next;
        i++;
    }
    newnode->prev = temp;
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->next->prev = newnode;
}

void insertafterposition(int position, int x){
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = x;
    newnode->prev = NULL;
    newnode->next = NULL;

    int i = 1;
    struct node* temp;
    temp = head;
    while(i < position){
        temp = temp->next;
        i++;
    }
    newnode->prev = temp;
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->next->prev = newnode;
}

int main(){
    int choice;
    int x, position;
    while(1){
    printf("1. Add Value\n2. Add Value at Beginning\n3. Add Value at End\n4. Add Value at Position\n5. Add Value after Position\n6. Display\n7. Exit\n");
    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    switch(choice){

    case 1:
    printf("Enter Your Value: ");
    scanf("%d",&x);
    create(x);
    break;

    case 2:
    printf("Enter Your Value: ");
    scanf("%d",&x);
    insertatbeginning(x);
    break;

    case 3:
    printf("Enter Your Value: ");
    scanf("%d",&x);
    insertatend(x);
    break;

    case 4:
    printf("Enter Your Position: ");
    scanf("%d",&position);
    printf("Enter Your Value: ");
    scanf("%d",&x);
    insertatposition(position, x);
    break;
    
    case 5:
    printf("Enter Your Position: ");
    scanf("%d",&position);
    printf("Enter Your Value: ");
    scanf("%d",&x);
    insertafterposition(position, x);
    break;

    case 6:
    display();
    printf("\n");
    break;

    case 7:
    exit(0);

    default:
    printf("Inavlid");
    }
}
    return 0;
}

