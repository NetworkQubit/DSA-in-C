#include<stdio.h>

#define SIZE 20
int a[SIZE];

void insertion(int element, int index, int *n){
    for (int i = *n - 1; i >= index; i--){
        a[i + 1] = a[i];    
    }
    a[index] = element;
    (*n)++;
}


void display(int a[], int n){
    for (int i = 0; i <= n; i++){
        printf("%d ", a[i]);
    }
}

int main(){
    int element, index, n;
    printf("Enter Your Index: ");
    scanf("%d", &index);
    printf("Enter the Element: ");
    scanf("%d", &element);

    printf("Enter the Number of Elements: ");
    scanf("%d", &n);
    printf("Enter the Elements in Your Array: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    display(a, n);
    insertion(element, index, &n);
    printf("\n");
    display(a, n);

    return 0;
}
