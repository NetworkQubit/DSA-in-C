#include<stdio.h>
#include<stdlib.h>

#define SIZE 20

int queue[SIZE];
int f = -1;
int r = -1;

void enqueue(int x){
    if (f == 0 && r == SIZE - 1){
        printf("Queue is Full");
    }else{
        queue[++r] = x;
    }
}

int dequeue(){
    if (f == -1 && r == -1){
        printf("Queue is Empty");
        exit(0);
    }else{
        int x;
        x = queue[r--];
        return x;
    }
}

void display(){
    for (int i = 0; i <= r; i++){
        printf("%d ", queue[i]);
    }
    printf("\n");
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
    exit(0);
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
