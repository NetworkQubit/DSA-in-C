#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

int stack[SIZE];
int top = -1;

int isFULL(){
    if (top == SIZE - 1){
        return 1;
    }
    else{
        return 0;
    } 
}

int isEMPTY(){
    if (top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(int x){
    if (isFULL()){
        printf("Stack Overflow\n");
    }
    else{
        top++;
        stack[top] = x;
    }
}

int pop(){
    if (isEMPTY()){
        printf("Stack Underflow\n");
        exit(0);
    }
    else{
        return stack[top--];
    }
}

void display(){
    if (isEMPTY()){
        printf("Stack is Empty\n");
    }
    else{
        for (int i = top; i >= 0; i--){
            printf("%d ", stack[i]);
        }
        printf("\n");
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
