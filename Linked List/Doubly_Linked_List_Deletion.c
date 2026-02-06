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

void deleteatbeginning();
void deleteatend();
void deleteatposition(int position, int x);
void deleteafterposition(int position, int x);

void deleteatbeginning(){

}