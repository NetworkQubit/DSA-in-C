#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* prev;
    struct node* next;
};

struct node* head;
struct node* temp;

void insertatbeginning(int x){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->prev = NULL;
    newnode->next = head;
    
    if (head != NULL){
        head->prev = newnode;
    }

    head = newnode; 
}
