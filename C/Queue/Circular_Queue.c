#include<stdio.h>
#include<stdlib.h>

#define SIZE 20

int queue[SIZE];
int f = -1;
int r = -1;

int isFULL(){
    if (f == (r + 1) % SIZE){
        return 1;
    }else{
        return 0;
    }
}

void enqueue(int x){
    if(isFULL()){
        printf("Queue is Full");
    }
    if(f == -1){
        f = r = 0;
    }else{
        r = (r + 1) % SIZE;
    }
    queue[r] = x;
}

void dequeue(){
    if (f == -1){
        printf("Queue is Empty");
    }else{
        f = (f + 1) % SIZE;
    }
}

void display(){
    int i;
    i = f;
    while(1){
        printf("%d ", queue[i]);
        if (i == r){
            break;
        }
        i = (i + 1) % SIZE;
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

