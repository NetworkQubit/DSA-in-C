#include<stdio.h>
#include<stdlib.h>

int a[20];

int deletion(int index, int *n){
    int temp;
    temp = a[index];
    for (int i = index; i < *n - 1; i++){
        a[i] = a[i + 1];    
    }
    (*n)--;
    printf("\nThe Deleted Element: %d",temp);
    return temp;
}


void display(int a[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}

int main(){
    int element, index, n;
    printf("Enter Your Index: ");
    scanf("%d", &index);

    printf("Enter the Number of Elements: ");
    scanf("%d", &n);
    printf("Enter the Elements in Your Array: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    display(a, n);
    deletion(index, &n);
    printf("\n");
    display(a, n);

    return 0;
}